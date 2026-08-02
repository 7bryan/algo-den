// OSN P 2025 > A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  cin >> str;

  bool o = false;
  bool s = false;
  bool n = false;
  bool p = false;

  int cnt = 0;

  for (int i = 0; i < str.length(); i++) {
    if (!(o && s && n && p)) {
      if (!o && str[i] == 'O')
        o = true;
      if (!s && str[i] == 'S')
        s = true;
      if (!n && str[i] == 'N')
        n = true;
      if (!p && str[i] == 'P')
        p = true;
    } else {
      break;
    }
  }

  if (!(o && s && n && p)) {
    cout << -1;
  } else {
    bool valid = false;
    for (int i = 0; i < str.length(); i++) {
      if (valid) {
        if (str[i] == 'P') {
          cnt++;
        }
      } else if (str[i] == 'O' || str[i] == 'S' || str[i] == 'N' ||
                 str[i] == 'P') {
        if (str[i] == 'P')
          valid = true;
        cnt++;
      }
    }

    cout << cnt;
  }

  return 0;
}
