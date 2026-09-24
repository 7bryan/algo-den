// codeforces 2254C1
#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;

  if (a == b)
    return "YES";
  if (n < 3)
    return "NO";

  int a_even = 0;
  int a_odd = 0;
  int b_even = 0;
  int b_odd = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      if (a[i] == '1')
        a_even++;
      if (b[i] == '1')
        b_even++;
    } else {
      if (a[i] == '1')
        a_odd++;
      if (b[i] == '1')
        b_odd++;
    }
  }

  return (a_even == b_even && a_odd == b_odd) ? "YES" : "NO";
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
