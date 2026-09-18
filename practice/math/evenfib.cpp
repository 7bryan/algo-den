#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve() {
  ll exceed = 4000000;
  ll sum = 0;

  ll prev = 1;
  ll curr = 2;

  while (curr <= exceed) {
    if (curr % 2 == 0) {
      sum += curr;
    }

    ll next = prev + curr;
    prev = curr;
    curr = next;
  }

  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();

  return 0;
}
