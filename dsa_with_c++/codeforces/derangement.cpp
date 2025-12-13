#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isDerangement(const vector<int> &b) {
  vector<int> c = b;
  sort(c.begin(), c.end());
  if (b == c)
    return false;

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
      cin >> x;

    vector<int> b = a;
    bool found = false;

    while (!b.empty()) {
      if (isDerangement(b)) {
        cout << "YES\n";
        cout << b.size() << "\n";
        for (int num : b)
          cout << num << " ";
        cout << "\n";
        found = true;
        break;
      }

      vector<int> c = b;
      sort(c.begin(), c.end());

      int conflict_index = -1;
      for (size_t i = 0; i < b.size(); ++i) {
        if (b[i] == c[i]) {
          conflict_index = (int)i;
          break;
        }
      }

      // possible)
      if (conflict_index == -1)
        break;

      b.erase(b.begin() + conflict_index);
    }

    if (!found) {
      cout << "NO\n";
    }
  }

  return 0;
}
