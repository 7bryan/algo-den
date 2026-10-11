#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<ll> a(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  vector<ll> pref(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    pref[i] = gcd(pref[i - 1], a[i]);
  }

  vector<ll> suff(n + 2, 0);
  for (int i = n; i >= 1; i--) {
    suff[i] = gcd(suff[i + 1], a[i]);
  }

  ll max_gcd = -1;
  int idx_best = -1;

  for (int i = 1; i <= n - k + 1; i++) {
    ll cur_gcd = gcd(pref[i - 1], suff[i + k]);

    if (cur_gcd > max_gcd) {
      max_gcd = cur_gcd;
      idx_best = i;
    }
  }

  cout << idx_best << " " << max_gcd;

  return 0;
}
