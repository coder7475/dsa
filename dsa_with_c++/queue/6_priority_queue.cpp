#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  priority_queue<int> maxHeap;
  priority_queue<int, vector<int>, greater<int>> minHeap;

  maxHeap.push(10);
  maxHeap.push(5);

  cout << maxHeap.top() << endl; // 10
  maxHeap.pop();                 // pop 10
  cout << maxHeap.top() << endl; // 5
  cout << maxHeap.empty() << endl;

  minHeap.push(10);
  minHeap.push(5);

  cout << minHeap.top() << endl;

  return 0;
}
