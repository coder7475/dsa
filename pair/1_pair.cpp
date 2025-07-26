#include <iostream>
// #include <utility>
using namespace std;

int main() {
  pair<int, string> pr = {1, "apple"};
  pair<int, char> p2 = make_pair(5, 'A');

  cout << "First: " << pr.first << "\n";
  cout << "Second: " << pr.second << "\n";
  cout << p2.first << " " << p2.second << "\n";

  return 0;
}
