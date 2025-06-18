#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *a = new int[n];

  // input
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int m;
  cin >> m;
  int *b = new int[m];

  // input
  for (int i = 0; i < m; i++)
    cin >> b[i];

  // operation
  int *c = new int[n + m];
  int p1 = 0, p2 = 0, k = 0;

  while (p1 < n && p2 < m) {
    if (a[p1] < b[p2]) {
      c[k++] = a[p1];
      p1++;
    } else {
      c[k++] = b[p2];
      p2++;
    }
  }

  while (p1 < n) {
    c[k++] = a[p1];
    p1++;
  }

  while (p2 < m) {
    c[k++] = b[p2];
    p2++;
  }

  // output
  for (int i = 0; i < n + m; i++)
    cout << c[i] << " ";

  cout << "\n";

  return 0;
}
