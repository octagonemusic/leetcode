#include <vector>

using namespace std;

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (nums[mid] == target) {
        int startpos = mid;
        int endpos = mid;
        while (startpos >= 0 && nums[startpos] == target) {
          startpos--;
        }
        while (endpos < nums.size() && nums[endpos] == target) {
          endpos++;
        }
        return {startpos + 1, endpos - 1};
      } else if (target < nums[mid]) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return {-1, -1};
  }
};
