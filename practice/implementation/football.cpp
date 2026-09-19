// codeforces 96A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  int n = s.length();

  bool dangerous = false;

  int zero_cnt = 0;
  int one_cnt = 0;
  for (int i = 0; i < n; i++) {
    if (zero_cnt == 7 || one_cnt == 7) {
      dangerous = true;
      break;
    }
    if (s[i] == '0') {
      zero_cnt++;
      one_cnt = 0;
    } else {
      one_cnt++;
      zero_cnt = 0;
    }
  }

  if (zero_cnt == 7 || one_cnt == 7) {
    dangerous = true;
  }

  if (dangerous)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
