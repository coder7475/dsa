#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    int y = x;
    int temp = x;

    while (temp) {
      int digit = temp % 10;
      y = min(y, digit);
      temp /= 10;
    }

    cout << y << "\n";
  }

  return 0;
}
