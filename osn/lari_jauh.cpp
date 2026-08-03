// KSN P 2020 Bagian B > B1
#include <bits/stdc++.h>
using namespace std;

int N, K;

int findDistanceIndex(int target, vector<int> &panjang_rute) {
  int l = 0, r = N - 1;

  while (l <= r) {
    int mid = l + (r - l) / 2;

    if (panjang_rute[mid] == target) {
      return mid;
    }
    if (panjang_rute[mid] > target) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }

  // if the target fall between to checkpoints, return the checkpoint before the
  // target
  // r + 1 (main function) (the checkpoint ahead)
  return r; // return the index of the largest element <= target
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> K;

  vector<int> panjang_rute(N);
  cin >> panjang_rute[0];
  for (int i = 1; i < N; i++) {
    int temp;
    cin >> temp;
    panjang_rute[i] = temp + panjang_rute[i - 1];
  }

  for (int i = 0; i < K; i++) {
    int target;
    cin >> target;

    cout << findDistanceIndex(target, panjang_rute) + 1 << "\n";
  }

  return 0;
}

// int N, K;

// cin >> N >> K;
// vector<int> rute(N);
// for (int i = 0; i < N; i++) {
//   cin >> rute[i];
// }

// vector<int> panjang_rute(N);
// panjang_rute[0] = rute[0];

// for (int i = 1; i < N; i++) {
//   panjang_rute[i] = panjang_rute[i - 1] + rute[i];
// }

// vector<int> ans;

// for (int i = 0; i < K; i++) {
//   int bebek;
//   cin >> bebek;

//   // upper bound finds the first post stricly greater than duck position
//   auto it = upper_bound(panjang_rute.begin(), panjang_rute.end(), bebek);

//   // 1 based index calculation
//   int count = distance(panjang_rute.begin(), it);

//   cout << count << "\n";
// }
