// codeforces 1472B

#include <bits/stdc++.h>
using namespace std;

// solve() handles exactly ONE testcase
void solve() {
  int n;
  cin >> n;
  int evensize = 0;
  int oddsize = 0;
  int sum = 0;

  for (int j = 0; j < n; j++) {
    int candy;
    cin >> candy;
    if (candy == 2) {
      evensize++;
      sum += candy;
    } else {
      oddsize++;
      sum += candy;
    }
  }

  if (sum % 2 == 0 && (evensize % 2 == 0 || oddsize >= 2)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve(); // This runs solve() 't' times cleanly
  }

  return 0;
}
