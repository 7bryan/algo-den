// codeforces 2267A
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// abca
// acba rev

int solve() {
  int n;
  cin >> n;
  char c;
  cin >> c;
  string s;
  cin >> s;

  string s_rev = s;
  reverse(s_rev.begin(), s_rev.end());

  if (s == s_rev)
    return 0;

  int ans = 0;
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) {
      if (s[i] != c && s[n - 1 - i] != c) {
        s[i] = c;
        s[n - 1 - i] = c;
        ans += 2;
      } else if (s[i] == c) {
        s[n - 1 - i] = c;
        ans++;
        continue;
      } else if (s[n - 1 - i] == c) {
        s[i] = c;
        ans++;
        continue;
      }
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
