// codeforces 2237B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  int n;
  cin >> n;

  vector<ll> a(n);
  vector<ll> b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  vector<ll> a_sorted = a;
  vector<ll> b_sorted = b;
  sort(a_sorted.begin(), a_sorted.end());
  sort(b_sorted.begin(), b_sorted.end());

  for (int i = 0; i < n; i++) {
    if (a_sorted[i] > b_sorted[i])
      return -1;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      int j = i;
      while (j < n && a[j] > b[i]) {
        j++;
      }

      ans += (j - i);

      ll temp = a[j];
      for (int k = j; k > i; k--) {
        a[k] = a[k - 1];
      }
      a[i] = temp;
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
