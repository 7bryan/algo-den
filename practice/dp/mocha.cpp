// codeforces 1559B
#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int first = -1;
  for (int i = 0; i < n; i++) {
    if (s[i] != '?') {
      first = i;
      break;
    }
  }

  // nigger
  if (first == -1) {
    for (int i = 0; i < n; i++) {
      s[i] = (i % 2 == 0) ? 'B' : 'R';
    }
  } else {
    for (int i = first - 1; i >= 0; i--) {
      s[i] = (s[i + 1] == 'B') ? 'R' : 'B';
    }
    for (int i = first + 1; i < n; i++) {
      if (s[i] == '?') {
        s[i] = (s[i - 1] == 'B') ? 'R' : 'B';
      }
    }
  }

  return s;
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
