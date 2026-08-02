// leetcode 283 > move zeroes
// sliding window
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nums = {0, 1, 0, 3, 12};

  int left = 0; // pointer for placing non zero elements
  int n = nums.size();

  // iterate the right pointer
  for (int right = 0; right < n; right++) {
    if (nums[right] != 0) {
      // swap element if right pointer finds a non-zero
      int temp = nums[right];
      nums[right] = nums[left];
      nums[left] = temp;
      left++; // move left pointer forward
    }
  }

  for (int &num : nums) {
    cout << num << " ";
  }

  return 0;
}
