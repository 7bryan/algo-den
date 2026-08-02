// lettcode
#include <algorithm>
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int n = nums.size();

  // two pointer approach
  int max_value = 0;

  int left = 0;
  int right = n - 1;

  while (left <= right) {
    // (right - left) = the width
    int length = min(nums[left], nums[right]);
    int width = (right - left);
    int area = length * width;

    max_value = max(max_value, area);

    // sliding the pointer of the smallest value
    // if the left one is the smaller one, then move the left pointer inward
    if (nums[left] < nums[right])
      left++;
    else
      right--;
  }

  cout << max_value;

  return 0;
}

// brute force approach

// int max_value = 0;
// int left = 0;
// for (int left = 0; left < n - 1; left++) {
//   for (int right = left + 1; right < n; right++) {
//     int area = min(nums[left], nums[right]) * (right - left);
//     max_value = max(max_value, area);
//   }
// }
