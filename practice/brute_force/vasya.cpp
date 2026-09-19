// codeforces 155A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  if (n == 1) {
    cout << 0;
    return 0;
  }
  int first;
  cin >> first;
  int min = first;
  int max = first;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    int score;
    cin >> score;
    if (score < min) {
      ans++;
      min = score;
    }
    if (score > max) {
      ans++;
      max = score;
    }
  }

  cout << ans;

  return 0;
}
