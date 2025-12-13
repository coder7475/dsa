#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int main() {
  // Input
  int n;
  cin >> n;
  cin.ignore();
  queue<int> q;

  while (n--) {
    string line;

    getline(cin, line);

    stringstream ss(line);
    string s;

    ss >> s;

    if (s == "push") {
      int x;
      ss >> x;
      q.push(x);
    } else if (s == "pop" && !q.empty()) {
      q.pop();
    } else if (s == "front" && !q.empty()) {
      cout << q.front() << "\n";
    } else if (s == "back" && !q.empty()) {
      cout << q.back() << "\n";
    }
  }

  return 0;
}
