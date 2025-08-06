#include <vector>

using namespace std;

class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) {
      return false;
    }

    int m = matrix.size();
    int n = matrix[0].size();

    int left = 0;
    int right = m * n - 1;

    while (left <= right) {
      int mid_idx = left + (right - left) / 2;

      int row = mid_idx / n;
      int col = mid_idx % n;
      int mid_val = matrix[row][col];

      if (mid_val == target) {
        return true;
      } else if (target < mid_val) {
        right = mid_idx - 1;
      } else {
        left = mid_idx + 1;
      }
    }

    return false;
  }
};
