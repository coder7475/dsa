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
  int k = 0;

  for (int i = 0; i < n; i++)
    c[k++] = a[i];

  for (int j = 0; j < m; j++)
    c[k++] = b[j];

  // output
  for (int i = 0; i < n + m; i++)
    cout << c[i] << " ";

  cout << "\n";

  return 0;
}
