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

  int countLines = 0, countChars = 0;

  while (getline(file, line)) {
    countLines++;
    countChars += line.size() + 1;
  }

  cout << "Lines: " << countLines << endl;
  cout << "Charaters: " << countChars << endl;

  file.close();

  return 0;
}
