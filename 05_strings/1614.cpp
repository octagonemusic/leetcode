#include <string>

using namespace std;

class Solution {
public:
  int maxDepth(string s) {
    int depth = 0;
    int max_depth = 0;
    for (char c : s) {
      if (c == '(') {
        depth++;
        max_depth = max(depth, max_depth);
      } else if (c == ')') {
        depth--;
      }
    }
    return max_depth;
  }
};
