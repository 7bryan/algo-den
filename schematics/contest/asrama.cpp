#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define ll long long

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<pair<ll, ll>> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i].first >> arr[i].second;
  }

  sort(arr.begin(), arr.end());

  return 0;
}
