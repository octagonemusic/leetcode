#include <vector>

using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<bool> markedRows(rows, false);
    vector<bool> markedColumns(cols, false);

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (matrix[i][j] == 0) {
          markedRows[i] = true;
          markedColumns[j] = true;
        }
      }
    }
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (markedRows[i] || markedColumns[j]) {
          matrix[i][j] = 0;
        }
      }
    }
  }
};
