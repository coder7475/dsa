#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  char processStr(string s, long long k) {
    int n = s.size();
    vector<long long> lens(n);

    long long len = 0;
    // Compute length after each step
    for (int i = 0; i < n; i++) {
      char c = s[i];
      if (c == '*') {
        if (len > 0)
          len--;
      } else if (c == '#') {
        len *= 2;
      } else if (c == '%') {
        // length doesn't change
      } else {
        // letter appended
        len++;
      }
      lens[i] = len;
    }

    if (k >= len)
      return '.'; // index out of range

    // Work backwards to find original char corresponding to k
    for (int i = n - 1; i >= 0; i--) {
      char c = s[i];
      long long currLen = lens[i];
      long long prevLen = i > 0 ? lens[i - 1] : 0;

      if (c == '*') {
        // We removed last char at this step
        // So at prev step length was currLen + 1 (if possible)
        // If k == currLen, means k is the removed char, no char there
        if (k == currLen) {
          // No char here (it was removed), return '.'
          return '.';
        }
        // else, k unchanged because string shrunk from prevLen to currLen =
        // prevLen - 1 so k still valid
      } else if (c == '#') {
        // We doubled string: prevLen = currLen / 2
        // The final string is prev + prev
        if (k >= currLen / 2) {
          k -= currLen / 2; // map k back to first half
        }
      } else if (c == '%') {
        // string reversed, index maps to len - 1 - k
        k = currLen - 1 - k;
      } else {
        // letter appended, length increased by 1
        if (k == currLen - 1) {
          // k points to this letter
          return c;
        }
        // else k remains same
      }
    }

    // If no letter found, return '.'
    return '.';
  }
};

int main() {
  Solution obj;

  string s1, s2;
  long long k1, k2;
  cin >> s1;
  cin >> k1;
  cin >> s2;
  cin >> k2;

  cout << obj.processStr(s1, k1) << endl; // Output: "a"
  cout << obj.processStr(s2, k2) << endl; // Output: "d"

  return 0;
}
