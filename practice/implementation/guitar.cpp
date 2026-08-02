// TROC #37 > A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int Sg, Eg, Sb, Eb, Sd, Ed, Sv, Ev;
  cin >> Sb >> Eb >> Sd >> Ed >> Sg >> Eg >> Sv >> Ev;

  int cnt = 0;

  for (int t = 0; t < 176; t++) {
    if ((Sg <= t && t < Eg) && !(Sb <= t && t < Eb) && !(Sd <= t && t < Ed) &&
        !(Sv <= t && t < Ev)) {
      cnt++;
    }
  }

  if (cnt > 0) {
    cout << "Guitar solo (" << cnt << " sec.)";
  } else {
    cout << "No guitar solo :(";
  }

  return 0;
}
