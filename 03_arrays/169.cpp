#include <vector>

using namespace std;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int curr_num = nums[0];
    int freq = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (curr_num != nums[i]) {
        freq--;
      } else {
        freq++;
      }

      if (freq == 0) {
        curr_num = nums[i];
        freq = 1;
      }
    }
    return curr_num;
  }
};
