#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {1, 4, 5, 1, 2, 3, 5, 6, 4, 1, 2, 5, 3};

  v.erase(remove(v.begin(), v.end(), 1), v.end());

  for (int &x : v)
    cout << x << " ";

  cout << "\n";

  return 0;
}
