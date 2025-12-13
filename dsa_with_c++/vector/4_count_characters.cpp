#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;

  // Create a vector to store counts: first 26 for A–Z, next 26 for a–z
  vector<int> count(52, 0);

  // Count occurrences
  for (char c : s) {
    if (isupper(c)) {
      count[c - 'A']++;
    } else if (islower(c)) {
      count[c - 'a' + 26]++;
    }
  }

  // Print uppercase letters in order
  for (int i = 0; i < 26; ++i) {
    if (count[i] > 0) {
      cout << (char)('A' + i) << " " << count[i] << endl;
    }
  }

  // Print lowercase letters in order
  for (int i = 26; i < 52; ++i) {
    if (count[i] > 0) {
      cout << (char)('a' + (i - 26)) << " " << count[i] << endl;
    }
  }

  return 0;
}
