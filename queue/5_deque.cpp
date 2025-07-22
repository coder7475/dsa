#include <deque>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
  deque<int> dq;
  int t;

  cin >> t;
  cin.ignore();

  while (t--) {
    string line;
    getline(cin, line);

    istringstream ss(line);
    string cmd;
    ss >> cmd;
    if (cmd == "push_front") {
      int x;
      ss >> x;
      dq.push_front(x);
    } else if (cmd == "push_back") {
      int x;
      ss >> x;
      dq.push_back(x);
    } else if (cmd == "pop_front") {
      dq.pop_front();
    } else if (cmd == "pop_back") {
      dq.pop_back();
    } else if (cmd == "front") {
      cout << dq.front() << endl;
    } else if (cmd == "back") {
      cout << dq.back() << endl;
    } else if (cmd == "print") {
      int x;
      ss >> x;
      cout << dq[x - 1] << endl;
    }
  }
  return 0;
}
