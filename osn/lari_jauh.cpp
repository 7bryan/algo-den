// KSN P 2020 Bagian B > B1
#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K;

  cin >> N >> K;
  vector<int> rute(N);
  for (int i = 0; i < N; i++) {
    cin >> rute[i];
  }

  vector<int> panjang_rute(N);
  panjang_rute[0] = rute[0];

  for (int i = 1; i < N; i++) {
    panjang_rute[i] = panjang_rute[i - 1] + rute[i];
  }

  vector<int> ans;

  for (int i = 0; i < K; i++) {
    int bebek;
    cin >> bebek;

    // upper bound finds the first post stricly greater than duck position
    auto it = upper_bound(panjang_rute.begin(), panjang_rute.end(), bebek);

    // 1 based index calculation
    int count = distance(panjang_rute.begin(), it);

    cout << count << "\n";
  }

  return 0;
}

// 2. Use std::binary_search
// if (std::binary_search(data.begin(), data.end(), target)) {
//     std::cout << "Element " << target << " found in the vector.\n";
// } else {
//     std::cout << "Element " << target << " not found.\n";
// }
