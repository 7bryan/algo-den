#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll ans = 0;

  int L = k - 1;
  int R = n - k;

  if (L <= R) {
    for (int i = L; i <= R; i++) {
      ans += a[i];
    }

    int p1 = L - 1;
    int p2 = R + 1;
    while (p1 >= 0 && p2 < n) {
      ans += max(a[p1], a[p2]);
      p1--;
      p2++;
    }
  } else {
    int p1 = R;
    int p2 = L;
    while (p1 >= 0 && p2 < n) {
      ans += max(a[p1], a[p2]);
      p1--;
      p2++;
    }
  }

  return ans;

  // vector<int> forbid;
  // ll rem = 0;

  // int n_cnt = n;
  // ll ans = 0;
  // while (n_cnt >= k) {
  //   int x = k - 1;
  //   int y = n_cnt - k;

  //   for (auto& f : forbid) {
  //     if (x >= f && y <)
  //   }

  //   ll temp = max(a[k - 1], a[(n_cnt - k)]);
  //   ans += temp;
  //   int to_erase;
  //   if (temp == a[k - 1])
  //     to_erase = k - 1;
  //   else
  //     to_erase = n_cnt - k;

  //   forbid.push_back(to_erase);

  //   a.erase(a.begin() + to_erase);
  //   n_cnt--;
  // }

  // return ans;
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
