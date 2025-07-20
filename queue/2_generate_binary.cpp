#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n = 5;
  queue<string> q;

  q.push("1");

  for (int i = 1; i <= n; i++) {
    string curr = q.front();
    q.pop();
    cout << curr << " ";
    q.push(curr + "0");
    q.push(curr + "1");
  }
  cout << "\n";

  return 0;
}
