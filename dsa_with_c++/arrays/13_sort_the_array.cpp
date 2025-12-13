#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  int maxVal = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    maxVal = max(maxVal, arr[i]);
  }

  vector<int> count(maxVal + 1, 0);

  for (int x : arr)
    count[x]++;

  for (int i = 0; i <= maxVal; i++) {
    while (count[i]--) {
      cout << i << " ";
    }
  }
  cout << "\n";

  return 0;
}

