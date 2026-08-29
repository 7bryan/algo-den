// codeforces 702A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  if (!(cin >> n))
    return 0;

  int maxcon = 1, curlen = 1;
  int prev, curr;

  cin >> prev; // Read the first element

  for (int i = 1; i < n; ++i) {
    cin >> curr;
    if (curr > prev) {
      curlen++;
      maxcon = max(maxcon, curlen); // Inline updating using built-in max
    } else {
      curlen = 1;
    }
    prev = curr;
  }

  cout << maxcon << "\n";
  return 0;
}
