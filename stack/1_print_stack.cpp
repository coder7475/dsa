#include <cstdlib>
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> st;

  // push values of 10, 20, ... to stack
  for (int i = 10; i < 100; i += 10) {
    st.push(i);
  }

  // print the values
  while (!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}
