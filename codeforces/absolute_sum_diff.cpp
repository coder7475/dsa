#include <iostream>
#include <vector>
using namespace std;

int main() {
  // input
  int n;

  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  // Operation
  int absDiff = 0;
  int pdSum = 0, sdSum = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j)
        pdSum += matrix[i][j];
      if (i + j == n - 1)
        sdSum += matrix[i][j];
    }
  }
  absDiff = abs(pdSum - sdSum);

  cout << absDiff << '\n';

  return 0;
}
