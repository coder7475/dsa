#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> um;

  um["apple"] = 5;
  um["banana"] = 6;
  um["apple"] = 10;

  for (const auto &[key, value] : um) {
    cout << key << " => " << value << endl;
  }

  return 0;
}
