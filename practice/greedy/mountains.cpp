// condeforces 2126B
#include <bits/stdc++.h>
using namespace std;

// int solve() {
//   int n, k;
//   cin >> n >> k;
//   vector<int> days(n);

//   for (int i = 0; i < n; i++) {
//     cin >> days[i];
//   }

//   int total = 0;
//   int cnt = 0;

//   for (int i = 0; i < n; i++) {
//     if (days[i] == 0) {
//       cnt++;
//       if (cnt == k) {
//         total++;
//         cnt = 0;
//         i++; // rest
//       }
//     } else {
//       cnt = 0;
//     }
//   }

//   return total;
// }

int solve() {
  int n, k;
  cin >> n >> k;

  int total = 0;
  int cnt = 0;

  // Tracks how many remaining days Jean MUST rest.
  // 0 means he is free to start/continue a hike.
  int rest_days = 0;

  for (int i = 0; i < n; i++) {
    int day;
    cin >> day; // Read EVERY element continuously in the main loop

    if (rest_days > 0) {
      // Mandatory rest day after a hike
      rest_days--;
    } else if (day == 0) {
      cnt++;
      if (cnt == k) {
        total++;
        cnt = 0;
        rest_days = 1; // Flag that the next day must be a rest day
      }
    } else {
      cnt = 0; // Rainy day resets consecutive good days
    }
  }

  return total;
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
