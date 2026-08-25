// C. simulasi tumpukan
#include <bits/stdc++.h>
using namespace std;

int Q;
vector<int> stk;
int global_delta = 0;

void command() {
  string cmd;
  for (int i = 0; i < Q; i++) {
    cin >> cmd;
    if (cmd == "add") {
      int x, y;
      cin >> x >> y;
      int nilai_netral = x - global_delta;
      for (int j = 0; j < y; j++) {
        stk.push_back(nilai_netral);
      }
      cout << stk.size() << "\n";
    } else if (cmd == "del") {
      bool first = true;
      int y;
      cin >> y;
      for (int j = 0; j < y; j++) {
        if (first) {
          cout << stk[stk.size() - 1] + global_delta << "\n";
          stk.pop_back();
          first = false;
        } else {
          stk.pop_back();
        }
      }
    } else if (cmd == "adx") {
      int d;
      cin >> d;
      global_delta += d;
    } else {
      int d;
      cin >> d;
      global_delta -= d;
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
