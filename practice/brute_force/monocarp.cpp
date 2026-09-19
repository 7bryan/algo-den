// codeforces 2260B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  ll x, y, k;
  cin >> x >> y >> k;

  ll ans = 0;
  for (ll i = 0; i < k; i++) {
    ans += (y + i) % (x + i);
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
