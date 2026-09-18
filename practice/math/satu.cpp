// penyisihan npc senior > G
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// int solve() {
//   ll n;
//   cin >> n;
//   int ans = 0;
//   bool found = false;
//   while (!found) {
//     while (n > 0) {
//       ans += n % 10;
//       n = n / 10;
//     }
//     if (ans / 10 == 0) {
//       found = true;
//       break;
//     }
//     n = ans;
//     ans = 0;
//   }

//   return ans;
// }

int solve() {
  ll n;
  cin >> n;
  // digital root
  return (n - 1) % 9 + 1;
}

int main() {
  // Optimize I/O operations
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    cout << solve() << "\n";
  }

  return 0;
}
