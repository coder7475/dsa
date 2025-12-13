#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int maxHike = 0;
    int i = 0;

    while (i <= n - k) {
      bool hikable = true;

      for (int j = i; j < i + k; j++) {
        if (arr[j] == 1) {
          hikable = false;
          break;
        }
      }

      if (hikable) {
        maxHike++;
        i += k + 1;
      } else {
        i++;
      }
    }

    cout << maxHike << "\n";
  }

  return 0;
}

