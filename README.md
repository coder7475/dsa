# Learn C++ with LearnCpp.com

This repository is dedicated to learning C++ through the excellent tutorials at [LearnCpp.com](https://www.learncpp.com/). It includes notes, code examples, and a custom script to **compile and run C++ files easily** from anywhere in your terminal.

## 🧠 Learning Goals

- Understand modern C++ (C++17 and newer)
- Practice examples from [LearnCpp.com](https://www.learncpp.com/)
- Gain confidence using C++ compilers and debugging tools
- Develop good coding and build habits early

---

## ⚙️ Quick C++ Compile & Run Script

A handy Bash script is included to help compile and run `.cpp` files in one command.

### 📁 Script Location

```bash
scripts/run_cpp.sh
````

### 🔧 Installation

1. Make the script executable:

```bash
chmod +x scripts/run_cpp.sh
```

2. Move it to a global directory so it can be used anywhere:

```bash
sudo mv scripts/run_cpp.sh /usr/local/bin/run_cpp
```

3. Now you can run C++ files from any location like this:

```bash
run_cpp main.cpp
```

---

## 📌 Script Features

- Uses `g++` with `-std=c++17`
- Compiles file to a `.out` executable
- Runs the program automatically after successful compilation
- Displays useful errors if the file is missing or fails to compile

---

## 💻 Example

```bash
run_cpp basics/hello.cpp
```

Sample output:

```
Compiling basics/hello.cpp -> basics/hello.out
Running basics/hello.out...
-------------------------------
Hello, world!
```

---

## 🧩 Requirements

- Ubuntu or Debian-based Linux system
- `g++` installed:

  ```bash
  sudo apt update && sudo apt install g++
  ```

---

## 🗂 Repository Structure

```
.
├── basics/            # Code examples organized by topic
├── notes/             # Markdown notes per section
├── scripts/           
│   └── run_cpp        # Global compile & run script
└── README.md
```

---

## 🙋‍♂️ Why This Repo?

Learning C++ can be overwhelming — this setup streamlines your environment so you can focus on **coding and understanding** rather than managing build tools.

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## 🤝 Contributing

Contributions are welcome! Feel free to open issues or submit pull requests with improvements, additional examples, or fixes.

```
---

Let me know if you'd like me to include a license file or generate any starter content like a `.gitignore`, sample directory layout, or C++ templates.
