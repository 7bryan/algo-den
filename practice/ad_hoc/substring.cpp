// TROC 5 > A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string x, y;
  cin >> x >> y;
  if (x.find(y) != string::npos) {
    cout << "TIDAK";
  } else {
    string temp = x + 'a';
    if (temp.find(y) != string::npos) {
      cout << "YA\n";
      cout << x + 'z';
    } else {
      cout << "YA\n";
      cout << temp;
    }
  }

  return 0;
}
