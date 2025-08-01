#include <vector>

using namespace std;

class Solution {
public:
  int findLeft(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int leftpos = -1;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (nums[mid] == target) {
        leftpos = mid;
        right = mid - 1;
      } else if (target < nums[mid]) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return leftpos;
  }

  int findRight(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int rightPos = -1;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (nums[mid] == target) {
        rightPos = mid;
        left = mid + 1;
      } else if (target < nums[mid]) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return rightPos;
  }

  vector<int> searchRange(vector<int> &nums, int target) {
    return {findLeft(nums, target), findRight(nums, target)};
  }
};
