#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int *a = new int[n];

  // input
  for (int i = 0; i < n; i++)
    cin >> a[i];

  // operation
  for (int p1 = 0, p2 = n - 1; p1 != p2; p1++, p2--) {
    int tmp = a[p1];
    a[p1] = a[p2];
    a[p2] = tmp;
  }

  // output
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  cout << "\n";

  return 0;
}
