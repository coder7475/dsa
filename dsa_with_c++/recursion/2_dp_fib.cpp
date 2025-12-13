#include <bits/stdc++.h>
using namespace std;
// Time: O(n)
// Space: O(1)
int fib(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  int prev2 = 0; // fib(0)
  int prev1 = 1; // fib(1)
  int curr;

  for (int i = 2; i <= n; i++) {
    curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
  }

  return curr;
}

int main() {
  cout << fib(5) << endl; // Output: 5
  return 0;
}

