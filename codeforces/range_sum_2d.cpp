#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, q;
  cin >> n >> m >> q;

  vector<vector<int>> matrix(n + 1, vector<int>(m + 1, 0));
  vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));

  // Read the matrix and build prefix sum
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      cin >> matrix[i][j];
      prefix[i][j] = matrix[i][j] + prefix[i - 1][j] + prefix[i][j - 1] -
                     prefix[i - 1][j - 1];
    }
  }

  // Read the queries
  for (int i = 0; i < q; ++i) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // Get sum of submatrix from (x1,y1) to (x2,y2)
    long long result = prefix[x2][y2] - prefix[x1 - 1][y2] -
                       prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];

    cout << result << "\n";
  }

  return 0;
}
