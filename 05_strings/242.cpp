#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }

    vector<int> freq_s(26, 0);
    vector<int> freq_t(26, 0);

    for (int i = 0; i < s.size(); i++) {
      freq_s[s[i] - 'a']++;
      freq_t[t[i] - 'a']++;
    }

    return freq_s == freq_t;
  }
};
