#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  ll k;
  cin >> k;

  vector<vector<ll>> a(n, vector<ll>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  vector<vector<ll>> P(n, vector<ll>(m, 1));

  for (int i = 0; i < n; i++) {
    vector<ll> pref(m, 1), suff(m, 1);
    pref[0] = a[i][0] % k;

    for (int j = 1; j < m; j++) {
      pref[j] = (pref[j - 1] * a[i][j]) % k;
    }

    suff[m - 1] = a[i][m - 1] % k;
    for (int j = m - 2; j >= 0; j--) {
      suff[j] = (suff[j + 1] * a[i][j]) % k;
    }

    for (int j = 0; j < m; j++) {
      ll left = (j > 0) ? pref[j - 1] : 1;
      ll right = (j < m - 1) ? suff[j + 1] : 1;
      P[i][j] = (left * right) % k;
    }
  }

  vector<vector<ll>> ans(n, vector<ll>(m, 1));

  for (int j = 0; j < m; j++) {
    vector<ll> pref_c(n, 1), suff_c(n, 1);
    pref_c[0] = P[0][j];
    for (int i = 1; i < n; i++) {
      pref_c[i] = (pref_c[i - 1] * P[i][j] % k);
    }

    suff_c[n - 1] = P[n - 1][j];
    for (int i = n - 2; i >= 0; i--) {
      suff_c[i] = (suff_c[i + 1] * P[i][j] % k);
    }

    for (int i = 0; i < n; i++) {
      ll t = (i > 0) ? pref_c[i - 1] : 1;
      ll b = (i < n - 1) ? suff_c[i + 1] : 1;
      ans[i][j] = (t * b) % k;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
