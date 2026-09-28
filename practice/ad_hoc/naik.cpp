// TROC #1 > C
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  int q;
  cin >> q;

  vector<ll> num(n, 0);
  for (ll i = 0; i < q; i++) {
    ll t, x, y;
    cin >> t >> x >> y;
    if (t == 1) {
      for (ll j = 0; j < x; j++) {
        num[j] += y;
      }
    } else {
      for (ll j = n - x; j < n; j++) {
        num[j] -= y;
      }
    }
  }

  ll maks = -1;
  for (auto &n : num) {
    maks = max(maks, abs(n));
  }

  cout << maks;

  return 0;
}
