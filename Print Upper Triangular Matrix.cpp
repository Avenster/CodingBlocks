#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < n && j >= i) {
        cout << matrix[i][j] << " ";
      } else {
        cout << 0 << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
