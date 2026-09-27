#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  int bank = 2;
  for (int i = 1; i <= n; i++) {
    if (i <= n - k) {
      bank = 2 * bank;
    } else {
      ans += bank;
      bank = 2;
    }
  }

  return ans;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    cout << solve() << "\n";
  }

  return 0;
}
