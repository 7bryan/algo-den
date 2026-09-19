// codeforces 1475B
#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n;
  cin >> n;

  int quotient = n / 2020;
  int remainder = n % 2020;

  return (quotient >= remainder) ? "YES" : "NO";
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
