#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
  string reverseWords(string s) {
    reverse(s.begin(), s.end());
    int slow = 0;
    int fast = 0;
    int n = s.size();
    while (fast < n) {
      while (fast < n && s[fast] == ' ') {
        fast++;
      }

      if (fast < n) {
        if (slow != 0) {
          s[slow++] = ' ';
        }
        int word_start_slow = slow;

        while (fast < n && s[fast] != ' ') {
          s[slow++] = s[fast++];
        }

        reverse(s.begin() + word_start_slow, s.begin() + slow);
      }
    }
    s.resize(slow);
    return s;
  }
};
