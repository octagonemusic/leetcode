#include <string>

using namespace std;

class Solution {
public:
  string longestPalindrome(string s) {
    int len = s.size();
    if (len == 0) {
      return "";
    }

    if (len == 1) {
      return s;
    }

    int start = 0;
    int end = 0;
    int maxLen = 0;

    for (int i = 0; i < len; i++) {
      int len1 = expand(s, i, i);
      int len2 = expand(s, i, i + 1);

      maxLen = max(len1, len2);

      if (maxLen > end - start) {
        start = i - (maxLen - 1) / 2;
        end = i + maxLen / 2;
      }
    }

    return s.substr(start, end - start + 1);
  }

  int expand(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
      left--;
      right++;
    }

    return right - left - 1;
  }
};
