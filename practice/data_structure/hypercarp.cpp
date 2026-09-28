// codeforces 2253B
#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> modules(n);

  int ans = 1;
  cin >> modules[0];

  for (int i = 1; i < n; i++) {
    cin >> modules[i];
    if (modules[i] != modules[i - 1]) {
      ans++;
    }
  }

  bool can_add = false;

  for (int i = 0; i < n - 1; i++) {
    if (modules[i] == modules[i + 1]) {
      if (i - 1 >= 0 && (i - 2 < 0 || modules[i - 2] != modules[i])) {
        can_add = true;
        break;
      }

      if (i + 2 < n && (i + 3 >= n || modules[i + 3] != modules[i])) {
        can_add = true;
        break;
      }
    }
  }

  if (can_add)
    ans++;

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
