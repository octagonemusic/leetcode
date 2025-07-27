#include <climits>
#include <vector>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int currBuy = prices[0];
    int maxProfit = INT_MIN;

    for (int i = 0; i < prices.size(); i++) {
      if (prices[i] < currBuy) {
        currBuy = prices[i];
      }
      maxProfit = max(maxProfit, prices[i] - currBuy);
    }

    return maxProfit;
  }
};
