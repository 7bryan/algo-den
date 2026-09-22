// codeforces 1837B
#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int max_len = 1;
  int curr_len = 1;

  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1])
      curr_len++;
    else {
      max_len = max(max_len, curr_len);
      curr_len = 1;
    }
  }
  max_len = max(max_len, curr_len);

  return max_len + 1;
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
