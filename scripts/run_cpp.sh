#!/bin/bash
#
# run_cpp - Compile and run C++ programs with enhanced error handling and logging
#

# Enable exit on error
set -o errexit

# Text formatting
BOLD="\033[1m"
RED="\033[31m"
GREEN="\033[32m"
YELLOW="\033[33m"
BLUE="\033[34m"
RESET="\033[0m"

# Function for logging messages
log_info() {
  echo -e "${BLUE}[INFO]${RESET} $1"
}

log_success() {
  echo -e "${GREEN}[SUCCESS]${RESET} $1"
}

log_error() {
  echo -e "${RED}[ERROR]${RESET} $1" >&2
}

log_warning() {
  echo -e "${YELLOW}[WARNING]${RESET} $1"
}

# Display usage information
show_usage() {
  echo -e "${BOLD}Usage:${RESET} run_cpp <filename.cpp> [compiler options]"
  echo "Compiles and runs C++ programs with g++"
  echo
  echo "Options:"
  echo "  Any additional arguments are passed to the g++ compiler"
  echo
  echo "Example:"
  echo "  run_cpp main.cpp -Wall -O2"
}

# Check if a file is provided
if [ $# -eq 0 ] || [ "$1" == "--help" ] || [ "$1" == "-h" ]; then
  show_usage
  exit 1
fi

# Validate input file exists and is a C++ file
if [ ! -f "$1" ]; then
  log_error "Input file '$1' does not exist."
  exit 1
fi

# Extract file extension
file_extension="${1##*.}"
if [ "$file_extension" != "cpp" ] && [ "$file_extension" != "cc" ] && [ "$file_extension" != "cxx" ]; then
  log_warning "File '$1' does not have a standard C++ extension (.cpp, .cc, .cxx)."
  read -p "Continue anyway? (y/n): " continue_anyway
  if [ "$continue_anyway" != "y" ] && [ "$continue_anyway" != "Y" ]; then
    exit 1
  fi
fi

# Get the file information
source_file="$1"
filename=$(basename "$source_file" ".$file_extension")
dir=$(dirname "$source_file")
output_dir="$dir/dist"
output="$output_dir/$filename.out"

# Create output directory if it doesn't exist
if [ ! -d "$output_dir" ]; then
  log_info "Creating output directory: $output_dir"
  mkdir -p "$output_dir" || {
    log_error "Failed to create output directory '$output_dir'"
    exit 1
  }
fi

# Shift the first argument to get any additional compiler flags
shift 1
compiler_flags="$*"

# Get timestamp for log information
timestamp=$(date "+%Y-%m-%d %H:%M:%S")
log_info "[$timestamp] Compiling $source_file to $output"

# Compile with improved error capture
compile_output=$(g++ -std=c++17 $compiler_flags "$source_file" -o "$output" 2>&1)
compile_status=$?

# Check if compilation succeeded
if [ $compile_status -eq 0 ]; then
  log_success "Compilation successful"

  # Check if the output file is executable
  if [ ! -x "$output" ]; then
    log_warning "Output file exists but is not executable. Setting execute permission."
    chmod +x "$output" || log_error "Failed to set execute permission on '$output'"
  fi

  # Get file size
  file_size=$(du -h "$output" | cut -f1)
  log_info "Output file size: $file_size"

  echo -e "\n${BOLD}Running program:${RESET} $output"
  echo -e "${BOLD}-------------------------------${RESET}"

  # Run the program and time it
  start_time=$(date +%s.%N)
  "$output"
  run_status=$?
  end_time=$(date +%s.%N)

  # Calculate execution time
  runtime=$(echo "$end_time - $start_time" | bc)

  echo -e "${BOLD}-------------------------------${RESET}"
  if [ $run_status -eq 0 ]; then
    log_success "Program execution completed successfully (runtime: ${runtime}s)"
  else
    log_error "Program execution failed with exit code $run_status (runtime: ${runtime}s)"
  fi

  exit $run_status
else
  log_error "Compilation failed with the following errors:"
  echo -e "${RED}$compile_output${RESET}"
  exit 1
fi
