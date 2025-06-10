#include <iostream>
using namespace std;

int main() {
  int a = 10;
  // pointer p point to address of a
  int *p = &a;

  // address of a and p value is same
  cout << &a << " " << p << endl;
  // deference p to get the value of a
  cout << a << " " << *p << endl;

  return 0;
}
