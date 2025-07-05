#include <ios>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Solution {
public:
  string toHexString(int n) {
    stringstream ss;
    ss << hex << uppercase << n;
    return ss.str();
  }
  string toBase36(int n) {
    if (n == 0)
      return "0";

    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;

    while (n > 0) {
      int remainder = n % 36;
      result = digits[remainder] + result;
      n /= 36;
    }

    return result;
  }

  string concatHex36(int n) {
    string hexadecimal = toHexString(n * n);
    string base36 = toBase36(n * n * n);

    return hexadecimal + base36;
  }
};

int main() {
  Solution obj;

  int t1 = 13, t2 = 36;

  cout << obj.concatHex36(t1) << endl;
  cout << obj.concatHex36(t2);

  return 0;
}
