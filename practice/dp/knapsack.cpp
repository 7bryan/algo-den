// B. perkenalan knapsack
#include <bits/stdc++.h>
#include <valarray>
using namespace std;

int n, k;
vector<int> weight;
vector<int> value;

vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

int solve() {
  for (int i = 0; i <= k; i++) {
    for (int w = 0; w <= n; w++) {
      // not taking the item
      dp[i][w] = dp[i - 1][w];

      // take the item if it fits
      if (weight[i - 1] <= w) {
        dp[i][w] = max(dp[i][w], value[i - 1] + dp[i - 1][w - weight[i - 1]]);
      }
    }
  }

  return dp[k][n];
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    int w, v;
    cin >> w >> v;
    weight.push_back(w);
    value.push_back(v);
  }

  cout << solve();

  return 0;
}
