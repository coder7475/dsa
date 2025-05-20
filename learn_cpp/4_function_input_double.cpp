#include <iostream>
using namespace std;

int main() {
  // get a value from user
  cout << "Enter an integer: ";

  int num{};

  cin >> num;
  // print the value doubled
  cout << num << " doubled is : " << num * 2 << '\n';

  return 0;
}
