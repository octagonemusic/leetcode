#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int left = -1;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        left++;
        swap(nums[left], nums[i]);
      }
    }
  }
};
