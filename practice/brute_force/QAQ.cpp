// codeforces QAQ 894A
#include <bits/stdc++.h>
#include <ios>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  cin >> n;
  int total_sub = 0;

  int total_Q = 0;
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == 'Q')
      total_Q++;
  }

  int left_Q = 0;
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == 'Q')
      left_Q++;
    if (n[i] == 'A')
      total_sub += left_Q * (total_Q - left_Q);
  }

  cout << total_sub;

  return 0;
}
