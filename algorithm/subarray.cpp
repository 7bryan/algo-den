#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> subarraySum(vector<int> &arr, int target) {
    int n = arr.size();
    int left = 0;
    int current_sum = 0;

    for (int right = 0; right < n; right++) {
      current_sum += arr[right];

      // Shrink window if the sum exceeds the target
      while (current_sum > target && left < right) {
        current_sum -= arr[left];
        left++;
      }

      // Check if target is found
      if (current_sum == target) {
        return {left + 1, right + 1}; // 1-based indexing
      }
    }

    return {-1};
  }
};
