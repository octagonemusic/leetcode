#include <string>

using namespace std;

class Solution {
public:
  int roman_map(char c) {
    switch (c) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    default:
      return 0;
    }
  }
  int romanToInt(string s) {
    int val = 0;

    for (int i = 0; i < s.length() - 1; i++) {
      if (roman_map(s[i]) < roman_map(s[i + 1])) {
        val -= roman_map(s[i]);
      } else {
        val += roman_map(s[i]);
      }
    }
    return val + roman_map(s[s.length() - 1]);
  }
};
