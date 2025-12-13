#include <iostream>
using namespace std;

class Student {
public:
  int a, b;
  Student(int a, int b) {
    (*this).a = a;
    this->b = b;
  }
};

int main() {
  Student obj1(10, 20);

  cout << obj1.a << " " << obj1.b << endl;

  return 0;
}
