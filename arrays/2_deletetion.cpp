#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int *arr = new int[n + 1];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int idx;

  cin >> idx;

  // delete value in index
  int i;
  for (i = idx + 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }

  arr[i] = 0;

  for (int i = 0; i < n + 1; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n";

  delete[] arr;
  return 0;
}
