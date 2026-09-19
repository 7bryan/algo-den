// codeforces 160A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> coins(n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
    total += coins[i];
  }

  sort(coins.rbegin(), coins.rend());
  int curr_money = 0;
  int coins_take = 0;
  for (int i = 0; i < n; i++) {
    if (curr_money <= (total - curr_money)) {
      curr_money += coins[i];
      coins_take++;
    } else {
      break;
    }
  }

  cout << coins_take;

  return 0;
}
