// osn informatika 2024 > 2A
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int bsearch(vector<ll> l, vector<ll> r, int n, ll target) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (target >= l[mid] && target <= r[mid]) {
      return mid;
    } else if (target > r[mid]) {
      low = mid + 1;
    } else
      high = mid - 1;
  }

  return -1;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<ll> l(n);
  vector<ll> r(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
  }

  int m;
  cin >> m;
  vector<ll> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  ll ans = 0;
  bool impo = false;

  for (int i = 0; i < m; i++) {
    int gear = bsearch(l, r, n, a[i]);
    if (gear == -1) {
      impo = true;
      break;
    }
    ans++;
  }

  if (impo)
    cout << -1;
  else
    cout << ans;

  return 0;
}
