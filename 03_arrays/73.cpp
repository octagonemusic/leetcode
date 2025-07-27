#include <vector>

using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    vector<int> markedRows;
    vector<int> markedColumns;

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (matrix[i][j] == 0) {
          markedRows.push_back(i);
          markedColumns.push_back(j);
        }
      }
    }

    for (int markedRow : markedRows) {
      for (int j = 0; j < cols; j++) {
        matrix[markedRow][j] = 0;
      }
    }
    for (int markedCol : markedColumns) {
      for (int i = 0; i < rows; i++) {
        matrix[i][markedCol] = 0;
      }
    }
  }
};
