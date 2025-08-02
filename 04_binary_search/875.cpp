#include <climits>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
  int minEatingSpeed(vector<int> &piles, int h) {
    int max_bananas = INT_MIN;

    for (int pile : piles) {
      max_bananas = max(max_bananas, pile);
    }

    int left = 1;
    int right = max_bananas;
    int k = INT_MAX;

    while (left <= right) {
      double curr_time = 0;
      int mid = left + (right - left) / 2;
      for (int pile : piles) {
        curr_time += ceil((double)pile / mid);
      }

      if (curr_time <= h) {
        right = mid - 1;
        k = min(k, mid);
      } else {
        left = mid + 1;
      }
    }
    return k;
  }
};
