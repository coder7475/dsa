#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

// Small primes that make a number not "good"
vector<int> bad_primes = {2, 3, 5, 7};

// Inclusion-exclusion to count numbers divisible by at least one bad prime
ll count_bad(ll n) {
  int sz = bad_primes.size();
  ll count = 0;

  // Subsets of bad_primes
  for (int mask = 1; mask < (1 << sz); ++mask) {
    ll lcm = 1;
    int bits = 0;
    for (int i = 0; i < sz; ++i) {
      if (mask & (1 << i)) {
        bits++;
        lcm *= bad_primes[i];
      }
    }
    if (lcm > n)
      continue;
    ll term = n / lcm;
    if (bits % 2 == 1)
      count += term;
    else
      count -= term;
  }

  return count;
}

// Count "good" numbers up to n
ll count_good_up_to(ll n) { return n - count_bad(n); }

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll l, r;
    cin >> l >> r;
    ll good = count_good_up_to(r) - count_good_up_to(l - 1);
    cout << good << '\n';
  }
  return 0;
}
