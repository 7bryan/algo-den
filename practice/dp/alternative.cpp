// codeforces 2241D
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = n - 1; i > 0; i--) {
    if (a[i] > b[i]) {
      ll diff = a[i] - b[i];
      a[i - 1] += diff;
      a[i] = b[i];
    }
  }

  if (a[0] <= b[0])
    return "YES";

  return "NO";
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
