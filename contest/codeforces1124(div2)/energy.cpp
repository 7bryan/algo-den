#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  int n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll ans = 0;

  int l = 0;
  int r = l + 1;

  auto max_el = ranges::max_element(arr);
  while (l < r) {
  }
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
