#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  long long maximumMedianSum(vector<int> &nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    long long sum = 0;

    for (int i = n / 3; i < n; i += 2) {
      sum += nums[i];
    }

    return sum;
  }
};

int main() {
  Solution obj;

  vector<int> arr1 = {2, 1, 3, 2, 1, 3};
  vector<int> arr2 = {1, 1, 10, 10, 10, 10};

  cout << obj.maximumMedianSum(arr1) << endl;
  cout << obj.maximumMedianSum(arr2) << endl;

  return 0;
}
