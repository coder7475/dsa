// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Solution {
// public:
//   long long perfectPairs(vector<int> &nums) {
//     long long pos = 0, neg = 0;
//     for (int x : nums) {
//       if (x >= 0)
//         pos++;
//       else
//         neg++;
//     }
//     return pos * (pos - 1) / 2 + neg * (neg - 1) / 2;
//   }
// };
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long perfectPairs(vector<int> &nums) {
    int n = nums.size();
    vector<long long> absVals;
    absVals.reserve(n);

    long long zeros = 0;
    for (int x : nums) {
      if (x == 0)
        zeros++;
      else
        absVals.push_back(abs((long long)x));
    }

    // Count zero pairs
    long long ans = zeros * (zeros - 1) / 2;

    // Sort the absolute values
    sort(absVals.begin(), absVals.end());

    // Two-pointer scan
    int j = 0;
    for (int i = 0; i < (int)absVals.size(); i++) {
      while (j + 1 < (int)absVals.size() && absVals[j + 1] <= 2 * absVals[i]) {
        j++;
      }
      ans += (j - i); // valid pairs with i
    }

    return ans;
  }
};

int main() {
  vector<int> v = {0, 1, 2, 3};
  // Your code here
  Solution obj;
  cout << obj.perfectPairs(v) << endl;
  return 0;
}
