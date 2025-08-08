#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isIsomorphic(string s, string t) {
    vector<char> map_s(128, '\0');
    vector<char> map_t(128, '\0');

    for (int i = 0; i < s.size(); i++) {
      int s_val = s[i];
      int t_val = t[i];

      if (map_s[s_val] == '\0') {
        map_s[s_val] = t_val;
      } else if (map_s[s_val] != t_val) {
        return false;
      }

      if (map_t[t_val] == '\0') {
        map_t[t_val] = s_val;
      } else if (map_t[t_val] != s_val) {
        return false;
      }
    }
    return true;
  }
};
