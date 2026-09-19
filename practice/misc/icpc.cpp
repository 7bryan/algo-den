// INC 2024 > M
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> teams(3 * n);
  for (int i = 0; i < 3 * n; i++) {
    cin >> teams[i];
  }

  sort(teams.begin(), teams.end());

  cout << teams[n];

  return 0;
}
