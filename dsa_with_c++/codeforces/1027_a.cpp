#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int sum = stoi(s);

    int root = int(sqrt(sum));

    if (root * root == sum) {
      cout << 0 << " " << root;
    } else {
      cout << -1;
    }

    cout << "\n";
  }

  return 0;
}
