#include <iostream>
#include <queue>
#include <sstream>
#include <stack>
using namespace std;
// link:
// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
int main() {
  // Input
  queue<int> q;
  string line;

  getline(cin, line);

  stringstream ss(line);
  int x;

  while (ss >> x) {
    q.push(x);
  }

  int k;
  cin >> k;

  // Operations
  stack<int> st;

  for (int i = 0; i < k; i++) {
    st.push(q.front());
    q.pop();
  }

  while (!st.empty()) {
    q.push(st.top());
    st.pop();
  }

  int n = q.size();
  for (int i = 0; i < n - k; i++) {
    q.push(q.front());
    q.pop();
  }

  // Output
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}
