// codeforces 750A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  int solving_time = (240 - k);
  int solved = 0;
  for (int i = 1; i <= n; i++) {
    if (i * 5 <= solving_time) {
      solved++;
      solving_time -= i * 5;
    }
  }

  cout << solved;

  return 0;
}
