#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  int n, m, x;

  cin >> n >> m;
  unordered_map<int, int> map;

  for (int i = 0; i < n; i++) {
    cin >> x;
    map[x]++;
  }

  for (int i = -m; i <= m; i++) {
    if (!map[i]) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
