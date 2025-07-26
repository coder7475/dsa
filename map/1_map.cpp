#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, string> m;

  // Insert values
  m[1] = "Apple";
  m[2] = "Banana";
  m[5] = "Cherry";
  m[100] = "Orange";

  // Access and print
  for (const auto &pair : m) {
    cout << pair.first << " => " << pair.second << "\n";
  }

  cout << m[100] << endl; // output: orange
  cout << m[23] << endl;  // output: " "

  return 0;
}
