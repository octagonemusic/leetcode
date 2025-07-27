#include <algorithm>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    int maxLen = 0;
    unordered_set<int> set;

    for (int num : nums) {
      set.insert(num);
    }

    for (auto num : set) {
      if (!set.count(num - 1)) {
        int currNum = num;
        int currLen = 1;

        while (set.count(currNum + 1)) {
          currLen++;
          currNum++;
        }

        maxLen = max(maxLen, currLen);
      }
    }

    return maxLen;
  }
};
