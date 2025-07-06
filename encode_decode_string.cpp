#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

class Solution {
public:
  string encode(vector<string> &strs) {}

  vector<string> decode(string s) {}
};

int main() {
  std::vector<string> input1 = {"neet", "code", "love", "you"};
  std::vector<string> input2 = {"we", "say", ":", "yes"};
  Solution obj;

  // Encoding & Decoding input1
  string encoded1 = obj.encode(input1);
  vector<string> decoded1 = obj.decode(encoded1);

  cout << "Encoded input1: " << encoded1 << endl;
  cout << "Decoded input1: ";
  for (auto &str : decoded1) {
    cout << str << " ";
  }
  cout << endl;

  // Encoding & Decoding input2
  string encoded2 = obj.encode(input2);
  vector<string> decoded2 = obj.decode(encoded2);

  cout << "Encoded input2: " << encoded2 << endl;
  cout << "Decoded input2: ";
  for (auto &str : decoded2) {
    cout << str << " ";
  }
  cout << endl;

  return 0;
}

// ? Problem Statement
// Encode and Decode Strings
//
// Design an algorithm to encode a list of strings to a single string. The
// encoded string is then decoded back to the original list of strings.
//
// Please implement encode and decode
//
// Example 1:
//
// Input: ["neet","code","love","you"]
//
// Output:["neet","code","love","you"]
// Example 2:
//
// Input: ["we","say",":","yes"]
//
// Output: ["we","say",":","yes"]
// Constraints:
//
// 0 <= strs.length < 100
// 0 <= strs[i].length < 200
// strs[i] contains only UTF-8 characters.
//
//
