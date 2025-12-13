#include <iostream>
#include <utility>
using namespace std;

int main() {
  int n;
  cin >> n;

  int *a = new int[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n / 2; i++) {
    swap(a[i], a[n - i - 1]); // using built-in swap function
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  cout << "\n";

  return 0;
}
