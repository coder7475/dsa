#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> a(n, vector<char>(m));

  // Read the grid
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int x, y;
  cin >> x >> y;
  x--; // Convert to 0-based index
  y--;

  // Directions: up, down, left, right, and 4 diagonals
  /*
   *
     (x-1,y-1)  (x-1,y)  (x-1,y+1)
     (x,  y-1)    C      (x,  y+1)
     (x+1,y-1)  (x+1,y)  (x+1,y+1)

  */
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  bool all_neighbors_x = true;

  for (int k = 0; k < 8; k++) {
    int nx = x + dx[k];
    int ny = y + dy[k];

    // Check if neighbor is inside grid
    if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
      if (a[nx][ny] != 'x') {
        all_neighbors_x = false;
        break;
      }
    }
  }

  if (all_neighbors_x)
    cout << "yes" << endl;
  else
    cout << "no" << endl;

  return 0;
}

