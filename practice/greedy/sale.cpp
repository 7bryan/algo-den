// codeforces 34B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(int m, int n) {
  ll money = 0;
  vector<int> tvs;
  for (int i = 0; i < m; i++) {
    int weight;
    cin >> weight;
    tvs.push_back(weight);
  }
  sort(tvs.begin(), tvs.end());

  for (int i = 0; i < m; i++) {
    if (n > 0 && tvs[i] < 0) {
      money += -tvs[i];
      n--;
    } else {
      break;
    }
  }

  return money;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n;
  cin >> m >> n;
  cout << solve(m, n);

  return 0;
}
