#include <bits/stdc++.h>
using namespace std;

void sub_pal(string &s, vector<int> &d) {
  int n = s.length();
  d.assign(n, 0);
  int l = 0, r = -1;
  for (int i = 0; i < n; i++) {
    int k = (i > r) ? 1 : min(d[l + r - i], r - i + 1);
    while (i - k >= 0 && i + k < n && s[i - k] == s[i + k]) {
      k++;
    }
    d[i] = k;
    if (i + k - 1 > r) {
      r = i + k - 1;
      l = i - k + 1;
    }
  }
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<string> grid(n);
  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }

  vector<vector<int>> A(n, vector<int>(m, 0));
  vector<vector<int>> B(n, vector<int>(m, 0));
  vector<vector<int>> C(n, vector<int>(m, 0));
  vector<vector<int>> D(n, vector<int>(m, 0));

  for (int i = 0; i < n; i++) {
    vector<int> d;
    sub_pal(grid[i], d);
    for (int j = 0; j < n; j++) {
      B[i][j] = d[j] * 2 - 1;
    }
  }

  for (int j = 0; j < m; j++) {
    string s = "";
    for (int i = 0; i < n; i++) {
      s += grid[i][j];
    }
    vector<int> d;
    sub_pal(s, d);
    for (int i = 0; i < n; i++) {
      A[i][j] = d[i] * 2 - 1;
    }
  }

  for (int k = -(n - 1); k < m; k++) {
    string s = "";
    vector<pair<int, int>> pos;
    for (int i = max(0, -k); i < n; i++) {
      s += grid[i][i + k];
      pos.push_back({i, i + k});
    }
    vector<int> d;
    sub_pal(s, d);
    for (int i = 0; i < pos.size(); i++) {
      D[pos[i].first][pos[i].second] = d[i] * 2 - 1;
    }
  }

  for (int k = 0; k < n + m - 1; k++) {
    string s = "";
    vector<pair<int, int>> pos;
    for (int i = max(0, k - m); i < n; i++) {
      s += grid[i][k - i];
      pos.push_back({i, k - 1});
    }
    vector<int> d;
    sub_pal(s, d);
    for (int i = 0; i < pos.size(); i++) {
      C[pos[i].first][pos[i].second] = d[i] * 2 - 1;
    }
  }

  int max_str = -1;
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int str = min({A[i][j], B[i][j], C[i][j], D[i][j]});
      if (str > max_str) {
        max_str = str;
        cnt = 1;
      } else if (str == max_str) {
        cnt++;
      }
    }
  }

  cout << cnt << " " << max_str << "\n";

  return 0;
}
