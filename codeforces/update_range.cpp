#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  ll n, q;
  cin >> n >> q;

  vector<ll> arr(n);
  vector<ll> diff(n + 1, 0);

  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  while (q--) {
    ll l, r, val;
    cin >> l >> r >> val;
    diff[l - 1] += val;
    diff[r] -= val;
  }

  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    sum += diff[i];
    arr[i] += sum;

    cout << arr[i] << " ";
  }

  cout << "\n";

  return 0;
}
