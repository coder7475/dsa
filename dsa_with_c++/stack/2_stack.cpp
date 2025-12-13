#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
  int t;
  stack<int> st;

  cin >> t;
  cin.ignore();

  while (t--) {
    string action;

    getline(cin, action);
    istringstream iss(action);
    string command;
    iss >> command;

    if (command == "push") {
      int num;
      iss >> num;
      st.push(num);
    } else if (command == "pop") {
      st.pop();
    } else if (command == "top") {
      cout << st.top() << "\n";
    } else {
      continue;
    }
  }

  return 0;
}
