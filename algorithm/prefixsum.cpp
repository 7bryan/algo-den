#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {10, 20, 10, 5, 15};

  int n = arr.size();

  vector<int> prefixSum(n);

  prefixSum[0] = arr[0];

  for (int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  for (int &num : prefixSum) {
    cout << num << " ";
  }

  return 0;
}
