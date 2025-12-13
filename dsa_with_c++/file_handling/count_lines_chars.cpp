#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  ifstream file("sample.txt");
  string line;

  if (!file.is_open()) {
    cerr << "Error: Could not open file!";
    return 1;
  }

  int countLines = 0, countChars = 0, countWords = 0;

  while (getline(file, line)) {
    countLines++;
    countChars += line.size() + 1;
    // count words using sstream
    istringstream ss(line);
    string word;

    while (ss >> word) {
      countWords++;
    }
  }

  file.close();

  cout << "Lines: " << countLines << endl;
  cout << "Words: " << countWords << endl;
  cout << "Charaters: " << countChars << endl;

  return 0;
}
