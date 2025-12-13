#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  vector<long long> prefix(n + 1, 0);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    prefix[i + 1] = prefix[i] + v[i];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;

    cout << prefix[r] - prefix[l - 1] << "\n";
  }

  return 0;
}
