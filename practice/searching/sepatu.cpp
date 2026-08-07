#include <bits/stdc++.h>
using namespace std;

#define ll long long

int bSearch(ll N, vector<int> ukuran) {
  int l = 0, r = ukuran.size() - 1;

  while (l <= r) {
    int mid = (r + l) / 2;

    if (ukuran[mid] == N) {
      return mid + 1;
    }
    if (ukuran[mid] < N) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }

  return -1;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> ukuran = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  ll N;
  cin >> N;

  cout << bSearch(N, ukuran);

  return 0;
}
