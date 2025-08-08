#include <string>

using namespace std;

class Solution {
public:
  bool rotateString(string s, string goal) {
    string combined = s + s;

    int left = 0;
    int right = s.size() - 1;

    if (s.size() != goal.size()) {
      return false;
    }

    return combined.find(goal) != string::npos;
  }
};
