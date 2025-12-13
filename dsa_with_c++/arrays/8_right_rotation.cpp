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
  int tmp = a[n - 1];

  for (int i = n - 1; i > 0; i--) {
    a[i] = a[i - 1];
  }

  a[0] = tmp;

  // output
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  cout << "\n";

  return 0;
}
