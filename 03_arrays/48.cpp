#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Transpose matrix
    for (int i = 0; i < rows; i++) {
      for (int j = i; j < cols; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }

    // Swap Columns
    int left = 0;
    int right = cols - 1;
    while (left < right) {
      for (int i = 0; i < rows; i++) {
        swap(matrix[i][left], matrix[i][right]);
      }
      left++;
      right--;
    }
  }
};
