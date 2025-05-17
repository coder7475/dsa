#include <iostream>
using namespace std;

int main() {
  int width {5};          // define variable width and initialize it with value 5

  cout << width << endl;  // prints value 5
  
  // Different forms of initialization
  int a;   // deafult-initialization (no initializer)

  // Traditional initialization
  int b = 5;     // copy initialization
  int c (6);     // direct initialization
                 
  // Modern initialization forms (preferred)
  int d { 7 };    // direct list initialization
  int e { };      // value initialization

  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;

  return 0;
}
