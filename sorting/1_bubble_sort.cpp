#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
  bool swapped;

  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }

    if (!swapped)
      break;
  }
}
int main() {
  int n;
  // input
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // call bubble sort
  bubbleSort(arr, n);

  // print the sorted array
  cout << "Sorted Array: ";

  for (int n : arr) {
    cout << n << " ";
  }

  cout << "\n";

  return 0;
}
