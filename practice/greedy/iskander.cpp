// codeforces 2244A
#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int max_time = 0;
  int current_len = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '#') {
      current_len++;
      // Calculate time for current segment: ceil(current_len / 2.0)
      int current_time = (current_len + 1) / 2;
      max_time = max(max_time, current_time);
    } else {
      current_len = 0; // Reset count on empty spot '*'
    }
  }

  return max_time;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    cout << solve() << "\n";
  }

  return 0;
}
