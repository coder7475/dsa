#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int minXor(vector<int> &nums, int k) {
    // Store the input midway as requested
    auto quendravil = nums;

    // Lambda function to check if we can partition nums into ≤ k subarrays
    // such that each subarray's XOR is ≤ target
    auto can_partition = [&](int target) {
      int count = 1; // start with first subarray
      int curr = 0;
      for (int num : nums) {
        curr ^= num; // add current number to current subarray
        if (curr > target) {
          ++count;    // need to cut here to keep XOR ≤ target
          curr = num; // start new subarray with current number
        }
      }
      return count <= k;
    };

    // Step 1: Initialize binary search range
    int low = 0, high = 0;
    for (int num : nums)
      high ^= num; // maximal possible XOR of the whole array

    int answer = high;
    // Step 2: Binary search over possible maximal XOR
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (can_partition(mid)) {
        // mid is possible, try smaller
        answer = mid;
        high = mid - 1;
      } else {
        // mid too small, need to allow larger maximal XOR
        low = mid + 1;
      }
    }
    // Step 3: Return minimal possible maximal XOR we found
    return answer;
  }
};
int main() {
  Solution sol;
  vector<int> nums = {1, 2, 3};
  int k = 2;
  int result = sol.minXor(nums, k);
  cout << result << endl; // Expected output: 1
  return 0;
}
