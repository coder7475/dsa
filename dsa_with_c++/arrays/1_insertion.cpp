#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int *arr = new int[n + 1];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int idx, value;

  cin >> idx;
  cin >> value;

  // assign value in insertion
  for (int i = n - 1; i >= idx; i--) {
    arr[i + 1] = arr[i];
  }

  arr[idx] = value;

  for (int i = 0; i < n + 1; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n";

  delete[] arr;
  return 0;
}
