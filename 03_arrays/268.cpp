#include <vector>

using namespace std;

class Solution {
public:
  int missingNumber(vector<int> &nums) {
    int size = nums.size();
    int expected_sum = (size * (size + 1)) / 2;
    int actual_sum = 0;
    for (int i = 0; i < size; i++) {
      actual_sum += nums[i];
    }
    return expected_sum - actual_sum;
  }
};
