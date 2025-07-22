#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long a, b, k;

    cin >> a >> b >> k;

    long long g = __gcd(a, b);

    long long dx = a / g;
    long long dy = b / g;

    if (max(dx, dy) <= k) {
      cout << 1 << '\n';
    } else {
      cout << 2 << '\n';
    }
  }
  return 0;
}
