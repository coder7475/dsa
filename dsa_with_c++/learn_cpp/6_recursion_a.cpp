#include <iostream>
using namespace std;

void printHello(int n);

int main() {
  int n = 5;

  printHello(n);

  return 0;
}

void printHello(int n = 0) {
  if (n == 0)
    return;

  cout << n << ". Hello Recursion!\n";

  printHello(n - 1);
}
