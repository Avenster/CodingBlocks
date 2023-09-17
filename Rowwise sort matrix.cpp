#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_rows(vector<vector<int>>& matrix) {
  for (int i = 0; i < matrix.size(); i++) {
    std::sort(matrix[i].begin(), matrix[i].end());
  }
}

int main() {
  int rows, columns;
  cin >> rows >> columns;
  vector<vector<int>> matrix(rows, vector<int>(columns));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix[i][j];
    }
  }
  sort_rows(matrix);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
