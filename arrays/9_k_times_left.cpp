#include <iostream>
using namespace std;

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
    int idx = (i - k + n) % 5;
    ans[idx] = a[i];
  }

  // output
  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";

  cout << "\n";

  return 0;
}
