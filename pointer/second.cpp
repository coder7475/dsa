#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *p = &a;
  int **q = &p;

  cout << &a << " " << p << " " << &p << " " << q << endl;

  return 0;
}
