// codeforces 2264B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  ll n, m;
  cin >> n >> m;
  vector<ll> pills(n);
  for (ll i = 0; i < n; i++) {
    cin >> pills[i];
  }

  ll score = 0;
  for (ll i = 1; i < n; i++) {
    ll pill = i * (pills[i] - pills[i - 1]);
    if (pill >= 0 && m > 0) {
      score += pill;
      m--;
    }
  }

  return score;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) {
    cout << solve() << "\n";
  }

  return 0;
}
