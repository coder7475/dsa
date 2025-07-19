#include <functional>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int countIslandsWithSumDivisibleByK(vector<vector<int>> &grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int count = 0;

    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    function<int(int, int)> dfs = [&](int i, int j) {
      if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 ||
          visited[i][j])
        return 0;

      visited[i][j] = true;
      int sum = grid[i][j];

      for (auto [dx, dy] : dirs) {
        sum += dfs(i + dx, j + dy);
      }

      return sum;
    };

    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        if (grid[i][j] > 0 && !visited[i][j]) {
          int total = dfs(i, j);
          if (total % k == 0)
            count++;
        }
      }
    }

    return count;
  }
};

int main() {
  Solution sol;

  // Test Case 1
  vector<vector<int>> grid1 = {{0, 2, 1, 0, 0},
                               {0, 5, 0, 0, 5},
                               {0, 0, 1, 0, 0},
                               {0, 1, 4, 7, 0},
                               {0, 2, 0, 0, 8}};
  int k1 = 5;
  cout << "Test Case 1 Output: "
       << sol.countIslandsWithSumDivisibleByK(grid1, k1) << endl;
  // Expected: 2

  // Test Case 2
  vector<vector<int>> grid2 = {{3, 0, 3, 0}, {0, 3, 0, 3}, {3, 0, 3, 0}};
  int k2 = 3;
  cout << "Test Case 2 Output: "
       << sol.countIslandsWithSumDivisibleByK(grid2, k2) << endl;
  // Expected: 6

  return 0;
}
