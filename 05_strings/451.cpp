#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string frequencySort(string s) {
    vector<int> freq(128, 0);

    for (char c : s) {
      freq[c]++;
    }

    vector<string> buckets(s.length() + 1, "");

    for (int i = 0; i < 128; i++) {
      if (freq[i] != 0) {
        buckets[freq[i]].append(freq[i], (char)i);
      }
    }

    string result = "";

    for (int i = s.length(); i >= 0; i--) {
      if (buckets[i] != "") {
        result += buckets[i];
      }
    }

    return result;
  }
};
