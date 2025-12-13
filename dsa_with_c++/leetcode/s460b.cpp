class Solution {
public:
  long long countLCT(string s) {
    long long countL = 0, countLC = 0, countLCT = 0;
    for (char ch : s) {
      if (ch == 'L')
        countL++;
      else if (ch == 'C')
        countLC += countL;
      else if (ch == 'T')
        countLCT += countLC;
    }
    return countLCT;
  }
  long long numOfSubsequences(string s) {
    long long ns = countLCT(s);

    for (int i = 0; i <= s.length(); i++) {
      for (char c : {'L', 'C', 'T'}) {
        string temp = s.substr(0, i) + c + s.substr(i);
        ns = max(ns, countLCT(temp));
      }
    }

    return ns;
  }
};
