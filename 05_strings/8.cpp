#include <climits>
#include <string>

using namespace std;

class Solution {
public:
  int getVal(char c) {
    switch (c) {
    case '0':
      return 0;
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    case '9':
      return 9;
    default:
      return -1;
    }
  }
  int myAtoi(string s) {
    long val = 0;
    int len = s.size();
    int i = 0;

    while (i < len && s[i] == ' ') {
      i++;
    }

    int sign = 1;

    if (i < len && s[i] == '-') {
      sign = -1;
      i++;
    } else if (i < len && s[i] == '+') {
      i++;
    }

    while (getVal(s[i]) != -1 && i < len) {
      val = val * 10 + getVal(s[i]);
      if (val * sign > INT_MAX) {
        return INT_MAX;
      } else if (val * sign < INT_MIN) {
        return INT_MIN;
      }
      i++;
    }

    return val * sign;
  }
};
