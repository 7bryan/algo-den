#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve(vector<ll> kamar, int n, int m) {
  sort(kamar.begin(), kamar.end());

  if (n == m)
    return kamar[n - 1] - kamar[0];

  ll ans = kamar[m - 1] - kamar[0];
  for (int i = 1; i <= n - m; i++) {
    ans = min(ans, kamar[i + m - 1] - kamar[i]);
  }

  return ans;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<ll> kamar;
  for (int i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    kamar.push_back(temp);
  }

  cout << solve(kamar, n, m);

  return 0;
}
