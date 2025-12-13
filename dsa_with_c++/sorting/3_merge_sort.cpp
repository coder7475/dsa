#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &arr, int n);

void mergeSubArrays(vector<int> &arr, vector<int> &leftArr,
                    vector<int> &rightArr);
int main() {
  int n;
  // input
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  mergeSort(arr, n);

  // print the sorted array
  cout << "Sorted Array: ";

  for (int n : arr) {
    cout << n << " ";
  }

  cout << "\n";

  return 0;
}

void mergeSort(vector<int> &arr, int n) {
  if (n <= 1)
    return;

  int mid = n / 2;

  vector<int> leftArr(mid), rightArr(n - mid);

  int i = 0, j = 0;

  for (; i < n; i++) {
    if (i < mid) {
      leftArr[i] = arr[i];
    } else {
      rightArr[j] = arr[i];
      j++;
    }
  }

  mergeSort(leftArr, mid);
  mergeSort(rightArr, n - mid);
  mergeSubArrays(arr, leftArr, rightArr);
}

void mergeSubArrays(vector<int> &arr, vector<int> &leftArr,
                    vector<int> &rightArr) {

  int leftSize = leftArr.size();
  int rightSize = rightArr.size();

  int i = 0, l = 0, r = 0;

  while (l < leftSize && r < rightSize) {
    if (leftArr[l] < rightArr[r]) {
      arr[i] = leftArr[l];
      i++;
      l++;
    } else {
      arr[i] = rightArr[r];
      r++;
      i++;
    }
  }

  while (l < leftSize) {
    arr[i] = leftArr[l];
    i++;
    l++;
  }

  while (r < rightSize) {
    arr[i] = rightArr[r];
    i++;
    r++;
  }
}
