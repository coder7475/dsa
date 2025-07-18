#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  int n, q;

  cin >> n >> q;

  vector<int> v(n);
  unordered_map<int, int> freq;

  while (q--) {
    int z, x;

    cin >> z >> x;

    if (z == 1) {
      v.push_back(x);
      freq[x]++;
    } else if (z == 2) {
      cout << freq[x] << endl;
    }
  }

  return 0;
}
