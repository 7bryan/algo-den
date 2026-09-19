// OSN 2023 > 2A - Optimized Solution
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, p;
  cin >> n >> p;

  // Store the W values for Type 1 and Type 2 operations separately
  vector<ll> type1;
  vector<ll> type2;

  for (int i = 0; i < p; i++) {
    int t;
    ll w;
    cin >> t >> w;
    if (t == 1) {
      type1.push_back(w);
    } else {
      type2.push_back(w);
    }
  }

  // Sort both vectors to enable binary search (O(P log P))
  sort(type1.begin(), type1.end());
  sort(type2.begin(), type2.end());

  int q;
  cin >> q;
  while (q--) {
    ll x, y;
    cin >> x >> y;

    ll max_xy = max(x, y);
    ll min_xy = min(x, y);

    // 1. Count Type 1 operations where W >= max(x, y)
    // lower_bound finds the first W that is >= max_xy.
    // Subtracting from type1.end() gives the count of all W's >= max_xy.
    ll count1 = type1.end() - lower_bound(type1.begin(), type1.end(), max_xy);

    // 2. Count Type 2 operations where W < min(x, y)
    // lower_bound finds the first W that is >= min_xy.
    // Subtracting type2.begin() gives the count of all W's strictly < min_xy.
    ll count2 = lower_bound(type2.begin(), type2.end(), min_xy) - type2.begin();

    // Total times this specific television was flipped
    ll total_flips = count1 + count2;

    // If it was flipped an odd number of times, it is ON (1). Otherwise OFF
    // (0).
    if (total_flips % 2 == 1) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }

  return 0;
}
