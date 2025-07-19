#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  bool isPrime(int n) {
    if (n <= 1)
      return false;
    if (n <= 3)
      return true;
    if (n % 2 == 0 || n % 3 == 0)
      return false;

    for (int i = 5; i * i <= n; i += 6) {
      if (n % i == 0 || n % (i + 2) == 0)
        return false;
    }

    return true;
  }

  long long splitArray(vector<int> &nums) {
    long long n = nums.size();
    long long a = 0, b = 0;
    for (long long i = 0; i < n; i++) {
      if (isPrime(i))
        a += nums[i];
      else
        b += nums[i];
    }

    return abs(a - b);
  }
};

int main() {
  vector<int> v1 = {2, 3, 4};
  vector<int> v2 = {-1, 5, 7, 0};
  Solution obj;

  cout << obj.splitArray(v1) << endl;
  cout << obj.splitArray(v2) << endl;

  return 0;
}
