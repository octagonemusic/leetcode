#include <vector>

using namespace std;

class Solution {
public:
  int smallestDivisor(vector<int> &nums, int threshold) {
    int left = 1;
    int right;
    for (int num : nums) {
      right = max(right, num);
    }
    while (left <= right) {
      int mid = left + (right - left) / 2;
      int sum = calculateSum(nums, mid);
      if (sum <= threshold) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }

    return left;
  }

  int calculateSum(vector<int> &nums, int divisor) {
    int sum = 0;
    for (int num : nums) {
      sum += (num + divisor - 1) / divisor;
    }
    return sum;
  }
};
