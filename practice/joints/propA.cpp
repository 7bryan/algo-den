#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  ll m;
  cin >> n >> m;

  vector<pair<ll, int>> a(n);
  for (int i = 0; i < n; i++) {
    ll val;
    cin >> val;
    a[i] = {val % m, i + 1};
  }

  sort(a.begin(), a.end());

  ll mind = (m - a[n - 1].first + a[0].first);
  int ans1 = a[n - 1].second, ans2 = a[0].second;

  for (int i = 0; i < n - 1; i++) {
    ll d = a[i + 1].first - a[i].first;
    if (d < mind) {
      mind = d;
      ans1 = a[i].second;
      ans2 = a[i + 1].second;
    }
  }

  cout << ans1 << " " << ans2;

  return 0;
}
