// codeforces 1113A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, v;
  cin >> n >> v;

  int tank_cap = 0;
  int money = 0;
  for (int i = 1; i <= n; i++) {
    if (tank_cap >= n - i)
      break;
    if (tank_cap != v) {
      if (v >= n) {
        money = n - 1;
        break;
      }
      money += (v - tank_cap) * i;
      tank_cap = v;
    }
    tank_cap--;
  }

  cout << money;

  return 0;
}
