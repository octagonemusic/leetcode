#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  int minDays(vector<int> &bloomDay, int m, int k) {
    if ((long)m * k > bloomDay.size()) {
      return -1;
    }

    int low = 1;
    int high = 0;

    for (int day : bloomDay) {
      high = max(high, day);
    }

    while (low < high) {
      int mid = low + (high - low) / 2;
      if (canMakeBouquets(bloomDay, m, k, mid)) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    return low;
  }

  bool canMakeBouquets(vector<int> &bloomDay, int m, int k, int mid) {
    int bouquets = 0;
    int currbouquet = 0;
    for (int i = 0; i < bloomDay.size(); i++) {
      int flowerCount = 0;
      while (i < bloomDay.size() && flowerCount < k && bloomDay[i] <= mid) {
        flowerCount++;
        i++;
      }

      if (flowerCount == k) {
        bouquets++;
        i--;
      }

      if (bouquets == m) {
        return true;
      }
    }
    return false;
  }
};
