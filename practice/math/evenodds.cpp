// codeforces 318A
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, k;
  cin >> n >> k;
  ll mid = (n + 1) / 2;

  if (k <= mid)
    cout << 2 * k - 1;
  else
    cout << (k - mid) * 2;

  return 0;
}
