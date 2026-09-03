// codeforces 2091B
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve() {
  int n;
  ll x;
  cin >> n >> x;

  vector<ll> teams(n);
  for (int i = 0; i < n; i++) {
    cin >> teams[i];
  }

  int ans = 0;
  ll teams_size = 0;
  sort(teams.rbegin(), teams.rend());

  for (int i = 0; i < n; i++) {
    teams_size++;

    if (teams_size * teams[i] >= x) {
      ans++;
      teams_size = 0;
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
