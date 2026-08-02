// OSN Informatika 2009 > 3D
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> bebek(n, 0);
  vector<int> sepatu(m, 0);
  for (int i = 0; i < n; i++) {
    cin >> bebek[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> sepatu[i];
  }

  sort(bebek.begin(), bebek.end());
  sort(sepatu.begin(), sepatu.end());

  int cnt = 0;

  int idx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = idx; j < m; j++) {
      if (bebek[i] == sepatu[j] || bebek[i] + 1 == sepatu[j]) {
        cnt++;
        idx = j + 1;
        break;
      }
    }
  }

  cout << cnt;

  return 0;
}
