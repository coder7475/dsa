#include <iostream>
using namespace std;

int main() {
  int n, k, s;
  int i;

  cin >> n;

  k = 1, s = n - 1;

  while (n--) {
    for (i = 0; i < s; i++) {
      cout << " ";
    }
    for (i = 0; i < k; i++) {
      cout << "*";
    }
    cout << "\n";
    k += 2;
    s--;
  }

  return 0;
}
