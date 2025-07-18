#include <iostream>
using namespace std;
/**
 * Time: O(n)
 * Space: O(n)
 */
int main() {
  int n;
  cin >> n;
  int *a = new int[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  int k;
  cin >> k;
  k = k % n;

  // logic
  int *ans = new int[n];

  for (int i = 0; i < n; i++) {
    int idx = (i + k) % n;
    ans[idx] = a[i];
  }

  // output
  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";

  cout << "\n";

  return 0;
}
