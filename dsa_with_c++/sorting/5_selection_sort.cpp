#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n);

int main() {
  int n;
  // input
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  selectionSort(arr, n);

  // print the sorted array
  cout << "Sorted Array: ";

  for (int n : arr) {
    cout << n << " ";
  }

  cout << "\n";

  return 0;
}

void selectionSort(vector<int> &arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    swap(arr[min_idx], arr[i]);
  }
}
