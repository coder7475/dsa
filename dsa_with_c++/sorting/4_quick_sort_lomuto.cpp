#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[high];

  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);

  return i + 1;
}

void quickSort(vector<int> &arr, int low, int high) {
  if (low >= high)
    return;

  int pivot = partition(arr, low, high);

  quickSort(arr, low, pivot - 1);
  quickSort(arr, pivot + 1, high);
}

int main() {
  int n;
  // input
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  quickSort(arr, 0, n - 1);

  // print the sorted array
  cout << "Sorted Array: ";

  for (int n : arr) {
    cout << n << " ";
  }

  cout << "\n";

  return 0;
}
