// TROC #16 > B
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(vector<ll> &murid_pos, int n, ll m) {
  sort(murid_pos.begin(), murid_pos.end());

  ll max_gap = 0;

  for (int i = 0; i < n - 1; i++) {
    ll gap = murid_pos[i + 1] - murid_pos[i];
    max_gap = max(max_gap, gap);
  }

  // gap from the last room back to the first room
  ll wrap_gap = m - murid_pos[n - 1] + murid_pos[0];
  max_gap = max(max_gap, wrap_gap);

  return m - max_gap;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  ll m;
  cin >> n >> m;

  vector<ll> murid_pos;
  for (int i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    murid_pos.push_back(temp);
  }

  cout << solve(murid_pos, n, m);

  return 0;
}
