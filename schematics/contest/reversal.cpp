#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  ll n_ans = 0;
  vector<ll> prizes;
  prizes.reserve(n * m);

  for (int i = 0; i < n; i++) {
    ll max_room = -1;
    for (int j = 0; j < m; j++) {
      ll val;
      cin >> val;

      max_room = max(max_room, val);
      prizes.push_back(val);
    }
    n_ans += max_room;
  }

  sort(prizes.rbegin(), prizes.rend());
  ll rev_ans = 0;
  for (int i = 0; i < n; i++) {
    rev_ans += prizes[i];
  }

  cout << n_ans << " " << rev_ans;

  return 0;
}
