// codeforces 1373B
#include <bits/stdc++.h>
using namespace std;

string solve() {
  string bin;
  cin >> bin;
  int n = bin.length();

  int zero = 0;
  int one = 0;

  for (int i = 0; i < n; i++) {
    if (bin[i] == '0')
      zero++;
    else
      one++;
  }

  return ((min(zero, one)) % 2 == 0) ? "NET" : "DA";
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
