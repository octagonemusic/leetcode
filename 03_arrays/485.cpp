#include <vector>

using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int curr_size = 0;
    int max_size = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 1) {
        curr_size++;
      } else {
        max_size = max_size > curr_size ? max_size : curr_size;
        curr_size = 0;
      }
    }
    max_size = max_size > curr_size ? max_size : curr_size;
    return max_size;
  }
};
