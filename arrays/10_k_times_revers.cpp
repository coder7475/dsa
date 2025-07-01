#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;
/**
 * Time: O(n)
 * Space: O(1)
 */

void reverse(int p1, int p2, int a[]) {
  while (p1 < p2) {
    swap(a[p1], a[p2]);
    p1++;
    p2--;
  }
}

int main() {
  int n;
  cin >> n;
  int *a = new int[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  int k;
  cin >> k;

  // logic
  k = k % n;
  reverse(0, k - 1, a);
  reverse(k, n - 1, a);
  reverse(0, n - 1, a);

  // output
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  cout << "\n";

  return 0;
}
