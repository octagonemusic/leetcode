#include <vector>

using namespace std;

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int res = nums[0];
    int currSum = nums[0];
    if (nums.size() == 1) {
      return nums[0];
    }
    for (int i = 1; i < nums.size(); i++) {
      currSum = max(nums[i], currSum + nums[i]);
      res = max(currSum, res);
    }

    return max(currSum, res);
  }
};
