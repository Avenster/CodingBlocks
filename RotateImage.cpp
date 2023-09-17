#include <iostream>
#include <vector>

using namespace std;

void rotate_anti_clockwise(vector<vector<int>>& matrix) {
  int n = matrix.size();

  // Transpose the matrix
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  // Reverse the rows of the matrix
  for (int i = 0; i < n / 2; i++) {
    swap(matrix[i], matrix[n - i - 1]);
  }
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

  // Rotate the array 90 degrees anti-clockwise
  rotate_anti_clockwise(matrix);

  // Print the rotated array
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
