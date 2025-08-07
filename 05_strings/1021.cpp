#include <string>

using namespace std;

class Solution {
public:
  string removeOuterParentheses(string s) {
    string res = "";
    int balance = 0;
    for (int i = 0; i < s.size(); i++) {
      char c = s.at(i);
      if (c == '(') {
        balance++;
        if (balance > 1) {
          res += c;
        }
      } else if (c == ')') {
        balance--;
        if (balance >= 1) {
          res += c;
        }
      }
    }
    return res;
  }
};
