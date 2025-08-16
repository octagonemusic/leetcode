#include <climits>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int beautySum(string s) {
    int totalBeauty = 0;
    for (int i = 0; i < s.size(); i++) {
      vector<int> freq(26, 0);
      for (int j = i; j < s.size(); j++) {
        freq[s[j] - 'a']++;
        int minFreq = INT_MAX;
        int maxFreq = INT_MIN;
        for (int k = 0; k < 26; k++) {
          if (freq[k] != 0) {
            minFreq = min(minFreq, freq[k]);
            maxFreq = max(maxFreq, freq[k]);
          }
        }
        totalBeauty += (maxFreq - minFreq);
      }
    }
    return totalBeauty;
  }
};
