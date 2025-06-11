#include <iostream>
using namespace std;

void fun(int x) {
  x = 100;
  cout << x << " " << &x << endl;
}

int main() {
  int x = 10;

  fun(x);

  cout << x << " " << &x << endl;

  return 0;
}
