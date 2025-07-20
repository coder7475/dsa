#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

// Helper function to compute nC2 (n choose 2)
ll combination2(int n) {
  if (n < 2)
    return 0;
  return 1LL * n * (n - 1) / 2;
}

int countHorizontalTrapezoids(vector<vector<int>> &points) {
  unordered_map<int, vector<int>> y_groups;

  for (auto &p : points) {
    int x = p[0], y = p[1];
    y_groups[y].push_back(x);
  }

  vector<pair<int, ll>> y_pairs; // (y, number of pairs)
  for (auto &[y, x_list] : y_groups) {
    int cnt = x_list.size();
    ll pairs = combination2(cnt);
    if (pairs > 0) {
      y_pairs.push_back({y, pairs});
    }
  }

  ll sum = 0, square_sum = 0;

  for (auto &[y, count] : y_pairs) {
    sum = (sum + count) % MOD;
    square_sum = (square_sum + (count * count) % MOD) % MOD;
  }

  ll result = (sum * sum % MOD - square_sum + MOD) % MOD;
  result = (result * ((MOD + 1) / 2)) % MOD;

  return result;
}

int main() {
  vector<vector<int>> points = {{1, 0}, {2, 0}, {3, 0}, {2, 2}, {3, 2}};
  cout << countHorizontalTrapezoids(points) << endl; // Output: 3
  return 0;
}
