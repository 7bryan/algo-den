// A. simulasi larik dinamis
#include <bits/stdc++.h>
using namespace std;

int Q;
vector<vector<int>> container = {{}};

void command() {
  for (int i = 0; i < Q; i++) {
    string input;
    cin >> input;

    if (input == "add") {
      int l, x, y;
      cin >> l >> x >> y;

      for (int j = 0; j < y; j++) {
        container[l - 1].push_back(x);
      }
    } else if (input == "new") {
      vector<int> temp;
      container.push_back(temp);
    } else {
      int l, z;
      cin >> l >> z;
      cout << container[l - 1][z - 1] << "\n";
    }
  }
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> Q;
  command();

  return 0;
}
