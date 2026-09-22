// codeforces 474A
#include <bits/stdc++.h>
using namespace std;

void solve(char move, string &str) {
  string words = "qwertyuiopasdfghjkl;zxcvbnm,./";
  int n = str.length();

  int offset = (move == 'R') ? -1 : 1;

  for (int i = 0; i < n; i++) {
    int pos = words.find(str[i]);

    str[i] = words[pos + offset];
  }
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char move;
  string str;
  cin >> move;
  cin >> str;

  solve(move, str);

  cout << str;

  return 0;
}
