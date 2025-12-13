#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    int it = 0;

    while (true) {
      bool isStep1 = false;

      for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
          a[i] -= 1;
          isStep1 = true;
          break;
        }
      }

      for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
          a[i] += 1;
          break;
        }
      }

      it++;

      if (!isStep1) {
        break;
      }
    }

    cout << it << endl;
  }

  return 0;
}
