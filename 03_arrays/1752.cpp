#include <vector>
using namespace std;

class Solution {
public:
  bool check(vector<int> &nums) {
    int prev = nums[0];
    int rotations = 0;

    for (int i = 1; i < nums.size(); i++) {
      int curr = nums[i];
      if (prev > curr) {
        rotations++;
      }
      if (rotations > 1) {
        return false;
      }
      prev = curr;
    }

    if (rotations == 0 ||
        (rotations == 1 && nums[nums.size() - 1] <= nums[0])) {
      return true;
    } else {
      return false;
    }
  }
};
