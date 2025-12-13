#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream file("sample.txt");
  string line;

  if (!file.is_open()) {
    cerr << "Error: Could not open file!";
    return 1;
  }

  while (getline(file, line)) {
    cout << line << "\n";
  }

  file.close();

  return 0;
}
