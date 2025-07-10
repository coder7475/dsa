#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  // input
  int n, m;

  cin >> n >> m;

  vector<vector<int>> matrix(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  // Operation
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m / 2; ++j) {
      swap(matrix[i][j], matrix[i][m - j - 1]);
    }
  }

  // output
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
