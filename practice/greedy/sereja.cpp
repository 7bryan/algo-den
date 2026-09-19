// codeforeces 381A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards[i];
  }

  int leftmost = 0;
  int rightmost = n - 1;
  bool sereja_turn = true;

  int sereja = 0;
  int dima = 0;
  for (int i = 0; i < n; i++) {
    if (sereja_turn) {
      if (cards[leftmost] > cards[rightmost]) {
        sereja += cards[leftmost];
        leftmost++;
      } else {
        sereja += cards[rightmost];
        rightmost--;
      }
      sereja_turn = !sereja_turn;
    } else {
      if (cards[leftmost] > cards[rightmost]) {
        dima += cards[leftmost];
        leftmost++;
      } else {
        dima += cards[rightmost];
        rightmost--;
      }
      sereja_turn = !sereja_turn;
    }
  }

  cout << sereja << " " << dima;

  return 0;
}
