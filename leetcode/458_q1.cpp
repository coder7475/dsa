#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

class Solution {
public:
  string processStr(string s) {
    string res = "";
    for (char c : s) {
      if (c == '*' && !res.empty()) {
        res.pop_back();
      } else if (c == '#') {
        res += res;
      } else if (c == '%') {
        reverse(res.begin(), res.end());
      } else if (islower(c)) {
        res += c;
      }
    }
    return res;
  }
};

int main() {
  Solution obj;

  string s1, s2;
  cin >> s1;
  cin >> s2;

  cout << obj.processStr(s1) << endl; // Output: "ba"
  cout << obj.processStr(s2) << endl; // Output: ""

  return 0;
}
