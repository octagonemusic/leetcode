#include <string>

using namespace std;

class Solution {
public:
  string largestOddNumber(string num) {
    int i = num.size() - 1;

    while (i >= 0) {
      int val = num[i] - '0';
      if (val % 2 != 0) {
        return num.substr(0, i);
      }
      i--;
    }
    return "";
  }
};
