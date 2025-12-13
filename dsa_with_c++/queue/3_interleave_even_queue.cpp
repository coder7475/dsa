#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push(x);
  }
  // Your code here
  queue<int> temp;
  // pop to half q to temp
  int t = n / 2;
  while (t--) {
    temp.push(q.front());
    q.pop();
  }
  // interleave
  while (!temp.empty()) {
    q.push(temp.front());
    temp.pop();
    q.push(q.front());
    q.pop();
  }
  // output
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}
