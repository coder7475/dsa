#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;
  int i, j, k;
  int f = 1, s = 1, l, m = 1;

  for (i = 1; i <= n; i++) {
    for (j = f; j <= n; j++) {
      cout << j;
    }
    for (k = 1; k <= s; k++) {
      cout << " ";
    }
    for (l = n; l >= m; l--) {
      cout << l;
    }
    cout << "\n";
    f++;
    s += 2;
    m++;
  }

  return 0;
}
