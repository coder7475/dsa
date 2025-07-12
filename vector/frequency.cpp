#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> freq(7, 0);

bool comp(int &a, int &b) {
  if (freq[a] == freq[b])
    return a < b;
  else
    return freq[a] > freq[b];
}

int main() {
  vector<int> v = {1, 4, 5, 1, 2, 3, 5, 6, 4, 1, 2, 5, 3};

  for (auto &x : v)
    freq[x]++;

  // sort
  sort(v.begin(), v.end(), comp);
  v.erase(unique(v.begin(), v.end()), v.end());

  // output
  for (auto &x : v)
    cout << x << " " << freq[x] << endl;

  return 0;
}
