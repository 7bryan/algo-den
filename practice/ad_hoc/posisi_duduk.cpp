// TROC #33 > B
#include <algorithm>
#include <iostream>

#define ll long long

using namespace std;

int maxval(ll M, ll A, ll B) { return min(A, B); }

int minval(ll M, ll A, ll B) {
  if ((A % 2 != 0 && B % 2 != 0) && (A + B == 2 * M))
    return 1;
  return 0;
}

int main() {
  ll M, A, B;

  cin >> M >> A >> B;

  cout << minval(M, A, B) << " " << maxval(M, A, B);

  return 0;
}
