// KNS P 2020 Bagian B >> B2
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  string lampu;

  int ans = 3;

  if (N < 3) {
    cout << -1;
  } else {
    if (lampu[0] != lampu[1] && lampu[1] != lampu[2] && lampu[0] != lampu[2]) {
      for (int i = 3; i < N - 1; i++) {
        if (lampu[i] == lampu[i - 3]) {
          ans++;
        }
      }
    }
  }

  return 0;
}
