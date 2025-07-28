#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    int ans = 0;
    unordered_map<int, int> map;
    int currSum = 0;
    for (int num : nums) {
      currSum += num;
      if (currSum == k) {
        ans++;
      }
      if (map.count(currSum - k)) {
        ans += map[currSum - k];
      }
      map[currSum]++;
    }
    return ans;
  }
};
