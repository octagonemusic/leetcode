#include <algorithm>
#include <climits>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string prefix = "";
    size_t maxLen = INT_MAX;
    for (int i = 0; i < strs.size(); i++) {
      maxLen = min(maxLen, strs[i].size());
    }

    int i = 0;

    while (i < maxLen) {
      char current_char = strs[0][i];
      bool flag = true;
      for (int j = 1; j < strs.size(); j++) {
        if (current_char != strs[j][i]) {
          flag = false;
          break;
        }
      }
      if (flag == true) {
        prefix += current_char;
      } else {
        break;
      }
    }
    return prefix;
  }
};
