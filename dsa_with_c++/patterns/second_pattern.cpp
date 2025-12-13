#include <iostream>
using namespace std;

int main() {
  int n, k = 1;
  int i;

  cin >> n;

  while (n--) {
    for (i = 0; i < k; i++) {
      cout << i + 1 << " ";
    }
    cout << "\n";
    k++;
  }

  return 0;
}
