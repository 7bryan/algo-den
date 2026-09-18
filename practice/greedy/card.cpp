#include <bits/stdc++.h>
using namespace std;

#define ll long long

string solve() {
  ll n;
  cin >> n;
  ll target = n + 1;
  bool prime = true;

  for (ll i = 2; i * i <= target; i++) {
    if (target % i == 0) {
      prime = false;
      break;
    }
  }

  return prime ? "YES" : "NO";
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
