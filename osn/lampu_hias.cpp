// KNS P 2020 Bagian B >> B2
#include <bits/stdc++.h>
using namespace std;

// solving using greedy

int solve(int N, string lampu) {
  int ans = 0;
  if (!(lampu[0] != lampu[1] && lampu[1] != lampu[2] && lampu[0] != lampu[2]) ||
      (N < 3)) {
    return -1;
  }

  char A = lampu[0], B = lampu[1], C = lampu[2];

  return -1;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  string lampu;
  cin >> N >> lampu;

  return 0;
}
