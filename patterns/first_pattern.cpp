#include <iostream>
using namespace std;

int main() {
  int n, k = 1;
  int i;
  cin >> n;

  while (n--) {
    for (i = 0; i < k; i++) {
      cout << "*";
    }
    cout << "\n";
    k++;
  }

  return 0;
}
