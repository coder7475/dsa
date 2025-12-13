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

  m[100] = "Law";
  // cout << "100 => " << m[100] << endl; // output: orange
  //   cout << m[23] << endl;               // output: " "
  //
  cout << "Updated New value\n";
  for (const auto &[key, value] : m) {
    cout << key << " => " << value << "\n";
  }

  // map in descending order
  map<int, string, greater<int>> descMap;

  descMap[1] = "Nathan";
  descMap[99] = "Lily";
  descMap[100] = "Rody";
  cout << "Descending Order Map: \n";
  for (const auto &[key, value] : descMap) {
    cout << key << " => " << value << "\n";
  }

  return 0;
}
