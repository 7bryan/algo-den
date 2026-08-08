#include <bits/stdc++.h>
using namespace std;

bool canSplit(vector<int> &arr) {
  int n = arr.size();

  int total = 0;
  for (int i = 0; i < n; i++) {
    total += arr[i];
  }

  int leftSum = 0;
  for (int i = 0; i < n; i++) {
    leftSum += arr[i];

    int rightSum = total - leftSum;

    if (rightSum == leftSum)
      return true;
  }

  return false;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {4, 3, 2, 1};

  cout << canSplit(arr);

  return 0;
}
