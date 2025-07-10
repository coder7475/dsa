#include <iostream>
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

  int x;

  cin >> x;

  // Operation

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (matrix[i][j] == x) {
        cout << "will not take number" << "\n";
        return 0;
      }
    }
  }

  cout << "will take number" << "\n";

  return 0;
}
