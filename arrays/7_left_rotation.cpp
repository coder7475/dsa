#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *a = new int[n];

  // input
  for (int i = 0; i < n; i++)
    cin >> a[i];

  // logic
  int tmp = a[0];

  for (int i = 1; i < n; i++) {
    a[i - 1] = a[i];
  }

  a[n - 1] = tmp;

  // output
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  cout << "\n";

  return 0;
}
