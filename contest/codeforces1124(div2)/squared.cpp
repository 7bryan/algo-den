#include <bits/stdc++.h>
using namespace std;

#define ll long long

int next(int x) {
  int sum = 0;
  while (x > 0) {
    int d = x % 10;
    sum += d * d;
    x /= 10;
  }

  return sum;
}

ll solve() {
  int n;
  cin >> n;
  vector<ll> lights(n);
  for (int i = 0; i < n; i++) {
    cin >> lights[i];
  }

  map<int, ll> freq;

  for (int i = 0; i < n; i++) {
    int curr = lights[i];

    for (int step = 0; step < 100; step++) {
      curr = next(curr);
    }
    freq[curr]++;
  }

  ll pairs = 0;
  for (auto &[val, cnt] : freq) {
    pairs += cnt * (cnt - 1) / 2;
  }

  return pairs;
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
