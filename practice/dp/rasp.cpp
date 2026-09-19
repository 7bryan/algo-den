// codeforces 1883C
#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n, k;
  cin >> n >> k;
  int min_op = 11;
  for (int i = 0; i < n; i++) {
    int comp;
    cin >> comp;
    int cur_op = 0;

    while (comp % k != 0) {
      comp++;
      cur_op++;
    }
    min_op = min(min_op, cur_op);
  }

  return min_op;
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
