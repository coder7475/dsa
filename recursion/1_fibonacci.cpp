#include <bits/stdc++.h>
using namespace std;
// Time: O(2^n)
// Space: O(n)
int fib(int n) {
  if (n == 0 || n == 1)
    return n; // Base cases
  int res = fib(n - 1) + fib(n - 2);
  return res;
}

int main() {
  cout << fib(6) << endl; // Output: 8
  return 0;
}
