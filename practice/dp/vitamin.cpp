// KSN P 2021 - bagian B > B3
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> harga;
vector<int> kandungan;
vector<int> dosis;

vector<int> dp(m + 1, 0);

int solve() {
  for (int i = 0; i < n; i++) {
    if (dosis[i] == 1) {
      // 0/1 knapsack
      for (int j = m; j >= 0; j++) {
        if ()
      }
    } else {
      // unbound knapsack
    }
  }
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int h, k, d;
    cin >> h >> k >> d;
    harga.push_back(h);
    kandungan.push_back(k);
    dosis.push_back(d);
  }

  return 0;
}
