#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, pair<string, int>> products;

  products[0] = {"Apple", 5}; // product 0 has apple, quantity
  products[1] = {"Banana", 2};

  for (const auto &[id, info] : products) {
    cout << "ID: " << id << ", Name: " << info.first << ", Qty: " << info.second
         << endl;
  }
  return 0;
}
