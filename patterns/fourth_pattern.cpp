#include <iostream>
using namespace std;

int main() {
  int n;
  int i, j, m;

  cin >> n;

  int l = n * 2 - 1, k = 1, s = n - 1;

  for (m = 1; m <= l; m++) {
    for (i = 1; i <= s; i++) {
      cout << " ";
    }
    for (j = 1; j <= k; j++) {
      cout << "*";
    }

    cout << "\n";

    if (m < n) {
      k += 2;
      s--;
    } else {
      k -= 2;
      s++;
    }
  }

  return 0;
}
