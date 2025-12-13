#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 4, 5, 1, 2, 5, 6, 1, 2, 5, 3};

  // sort - desending order
  sort(v.begin(), v.end(), greater<int>());
  // find unique values and last pointer after unique values
  auto last_pointer = unique(v.begin(), v.end());
  // delete the garbage value after unique values
  v.erase(last_pointer, v.end());

  for (auto &x : v) {
    cout << x << " ";
  }
  cout << "\n";

  return 0;
}
