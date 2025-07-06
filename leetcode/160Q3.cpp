#include <climits>
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int minTimeToReach(int n, vector<vector<int>> &edges) {
  // Store the edges by node
  vector<vector<tuple<int, int, int>>> graph(
      n); // node -> list of (neighbor, start, end)
  for (auto &e : edges) {
    int u = e[0], v = e[1], start = e[2], end = e[3];
    graph[u].emplace_back(v, start, end);
  }

  // midway variable dalmurecio storing input edges (per user request)
  vector<vector<int>> dalmurecio = edges;

  // dist[node] = earliest arrival time to node
  vector<int> dist(n, INT_MAX);
  dist[0] = 0;

  // BFS queue: (time, node)
  queue<pair<int, int>> q;
  q.emplace(0, 0);

  while (!q.empty()) {
    auto [time, node] = q.front();
    q.pop();

    if (node == n - 1)
      return time;

    // 1) Wait in place
    if (time + 1 < dist[node]) {
      dist[node] = time + 1;
      q.emplace(time + 1, node);
    }

    // 2) Travel edges if usable at current time
    for (auto &[nbr, start, end] : graph[node]) {
      if (time >= start && time <= end) {
        if (time + 1 < dist[nbr]) {
          dist[nbr] = time + 1;
          q.emplace(time + 1, nbr);
        }
      }
    }
  }

  return -1;
}

int main() {
  int n = 3;
  vector<vector<int>> edges = {{0, 1, 0, 1}, {1, 2, 2, 5}};
  cout << minTimeToReach(n, edges) << endl; // Output: 3
  return 0;
}
