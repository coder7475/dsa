#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<pair<string, int>> pr(n);
  for (int i = 0; i < n; i++) {
    cin >> pr[i].first >> pr[i].second;
  }

  sort(pr.begin(), pr.end(), [](auto &a, auto &b) {
    if (a.second == b.second) {
      return a.first < b.first;
    }
    return a.second > b.second;
  });

  for (auto &x : pr) {
    cout << x.first << " " << x.second << endl;
  }

  return 0;
}
