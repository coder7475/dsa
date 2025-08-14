#include <bits/stdc++.h>
using namespace std;
// Time: O(n)
// Space: O(n)
int fib(int n, vector<int> &memo) {
  if (n == 0 || n == 1)
    return n;

  if (memo[n] != -1)
    return memo[n]; // Return cached value

  memo[n] = fib(n - 1, memo) + fib(n - 2, memo); // Store result
  return memo[n];
}

int main() {
  int n = 5;
  vector<int> memo(n + 1, -1);  // Initialize memo array with -1
  cout << fib(n, memo) << endl; // Output: 5
  return 0;
}
