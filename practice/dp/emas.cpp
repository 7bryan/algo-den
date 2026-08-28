// OSN informatika 2009 > 2H
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> dp(n + 1);

int solve() {
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    dp[i] = max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
  }

  return dp[n];
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  cout << solve();

  return 0;
}
