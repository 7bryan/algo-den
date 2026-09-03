// condeforces 2126B
#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n, k;
  cin >> n >> k;
  vector<int> days(n);

  for (int i = 0; i < n; i++) {
    cin >> days[i];
  }

  int total = 0;
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if (days[i] == 0) {
      cnt++;
      if (cnt == k) {
        total++;
        cnt = 0;
        i++; // rest
      }
    } else {
      cnt = 0;
    }
  }

  return total;
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
