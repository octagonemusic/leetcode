#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int k = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[k]) {
        k++;
        swap(nums[i], nums[k]);
      }
    }
    return k + 1;
  }
};
