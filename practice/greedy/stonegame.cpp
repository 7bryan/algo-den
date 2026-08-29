// codeforces stone game 1538A
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // minmax_element returns pair of iterators to the min and max elements
  auto [min_it, max_it] = minmax_element(a.begin(), a.end());

  // Convert iterators to 1-based indices
  int pos1 = min_it - a.begin() + 1;
  int pos2 = max_it - a.begin() + 1;

  // Ensure pos1 is always the leftmost of the two targets
  int L = min(pos1, pos2);
  int R = max(pos1, pos2);

  // Calculate the three possible strategies
  int option1 = R;               // Both from left
  int option2 = n - L + 1;       // Both from right
  int option3 = L + (n - R + 1); // One from left, one from right

  cout << min({option1, option2, option3}) << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  if (cin >> t) {
    while (t--) {
      solve();
    }
  }
  return 0;
}
