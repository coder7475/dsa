#include <climits>
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;

class Solution {
public:
  long long minCost(int m, int n, vector<vector<int>> &waitCost) {
    priority_queue<tuple<long long, int, int, int>,
                   vector<tuple<long long, int, int, int>>, greater<>>
        pq;

    vector<vector<vector<long long>>> dist(
        m, vector<vector<long long>>(n, vector<long long>(2, LLONG_MAX)));

    long long startCost = (0 + 1) * (0 + 1); // =1
    pq.emplace(startCost, 0, 0, 1);
    dist[0][0][1] = startCost;

    while (!pq.empty()) {
      auto [cost, i, j, parity] = pq.top();
      pq.pop();

      if (i == m - 1 && j == n - 1) {
        return cost;
      }

      if (dist[i][j][parity] < cost)
        continue;

      if (parity == 1) {
        if (j + 1 < n) {
          int ni = i, nj = j + 1;
          long long newCost = cost + (ni + 1) * (nj + 1);
          if (newCost < dist[ni][nj][0]) {
            dist[ni][nj][0] = newCost;
            pq.emplace(newCost, ni, nj, 0);
          }
        }
        if (i + 1 < m) {
          int ni = i + 1, nj = j;
          long long newCost = cost + (ni + 1) * (nj + 1);
          if (newCost < dist[ni][nj][0]) {
            dist[ni][nj][0] = newCost;
            pq.emplace(newCost, ni, nj, 0);
          }
        }
      } else { // even second: must wait
        long long newCost = cost + waitCost[i][j];
        if (newCost < dist[i][j][1]) {
          dist[i][j][1] = newCost;
          pq.emplace(newCost, i, j, 1);
        }
      }
    }

    return -1;
  }
};

int main() {
  Solution obj;

  vector<vector<int>> arr1 = {{1, 2}};
  cout << obj.minCost(1, 2, arr1) << endl;

  int m = 2, n = 2;
  vector<vector<int>> arr2 = {{1, 2}, {3, 4}};
  cout << obj.minCost(m, n, arr2) << endl;

  return 0;
}

