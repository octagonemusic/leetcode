#include <vector>

using namespace std;

class Solution {
public:
  int shipWithinDays(vector<int> &weights, int days) {
    int left = 1;
    int right = 0;

    for (int weight : weights) {
      right += weight;
      left = max(left, weight);
    }

    while (left < right) {
      int mid = left + (right - left) / 2;
      int time_taken = timeTaken(weights, mid);
      if (time_taken <= days) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }
    return left;
  }

  int timeTaken(vector<int> &weights, int capacity) {
    int time = 1;
    int curr_load = 0;

    for (int weight : weights) {
      if ((curr_load + weight > capacity)) {
        time++;
        curr_load = weight;
      } else {
        curr_load += weight;
      }
    }

    return time;
  }
};
