// gemastik 2022 > penyisihan > I
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  string A, B;
  cin >> A >> B;

  int l, r;
  for (int i = 0; i < n; i++) {
    if (A[i] > B[i]) {
      l = i;
    }
  }

  return 0;
}
