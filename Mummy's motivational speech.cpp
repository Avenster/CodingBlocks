#include <iostream>
#include <vector>

using namespace std;

bool is_lower_triangular(vector<vector<int>>& matrix) {
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = i + 1; j < matrix.size(); j++) {
      if (matrix[i][j] != 0) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }
  bool is_lower_triangular = is_lower_triangular(matrix);

  if (is_lower_triangular) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
