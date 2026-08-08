#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int solve(int n, int m, int a, int b) {
  int one = floor(n / a) * floor(m / b);
  int two = floor(n / b) * floor(m / a);

  return max(one, two);
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, a, b;
  cin >> n >> m >> a >> b;

  cout << solve(n, m, a, b);

  return 0;
}
