// codeforces 1932A
#include <bits/stdc++.h>
using namespace std;

int solve() {
  int len;
  cin >> len;
  string cells;
  cin >> cells;

  int coins = 0;
  for (int i = 0; i < len; i++) {
    char cell = cells[i];

    if (cell == '@')
      coins++;
    else if (i < len - 2 && cell == '*' && cells[i + 1] == '*')
      return coins;
  }

  return coins;
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
