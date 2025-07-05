#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> freq(16, 0);

  for (int &x : v) {
    cin >> x;
  }

  for (int &x : v) {
    freq[x]++;
  }

  for (int i = 0; i < 16; i++) {
    if (freq[i] > 0)
      cout << i << " " << freq[i] << endl;
  }

  return 0;
}
