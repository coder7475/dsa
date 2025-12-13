#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  unordered_set<int> us = {5, 2, 7, 2, 3};

  for (int x : us) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}
