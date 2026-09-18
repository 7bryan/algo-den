// penyisihan npc senior
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  ll ans = 0;
  ll n;
  cin >> n;

  ll sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += 3 * i;
  }
  while (sum > 0) {
    ans += sum % 10;
    sum = sum / 10;
  }

  return ans;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll q;
  cin >> q;
  while (q--) {
    cout << solve() << "\n";
  }

  return 0;
}
