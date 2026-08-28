// codeforces 996A
// pure greedy????
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;

int solve() {
  ll ans = 0;
  while (n > 0) {
    if (n - 100 >= 0) {
      n -= 100;
      ans++;
    } else if (n - 20 >= 0) {
      n -= 20;
      ans++;
    } else if (n - 10 >= 0) {
      n -= 10;
      ans++;
    } else if (n - 5 >= 0) {
      n -= 5;
      ans++;
    } else {
      n--;
      ans++;
    }
  }

  return ans;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  cout << solve();

  return 0;
}
