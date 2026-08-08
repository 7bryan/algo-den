// geeks for geeks > equiblirium index
#include <algorithm>
#include <bits/stdc++.h>
#include <cinttypes>
using namespace std;

int findEquilibrium(vector<int> &arr) {
  int n = arr.size();

  vector<int> pref(n, 0);
  vector<int> suff(n, 0);

  pref[0] = arr[0];
  suff[n - 1] = arr[n - 1];

  for (int i = 1; i < n; i++) {
    pref[i] = pref[i - 1] + arr[i];
  }
  for (int i = n - 2; i >= 0; i--) {
    suff[i] = suff[i + 1] + arr[i];
  }

  for (int i = 0; i < n; i++) {
    cout << suff[i] << " ";
  }

  for (int i = 0; i < n; i++) {
    if (pref[i] == suff[i])
      return i;
  }

  return -1;
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 1, 1, 1};

  cout << "\n\n" << findEquilibrium(arr);

  return 0;
}

// unoptimized algo
// int solve(vector<int> &arr) {
//   int n = arr.size();

//   int pointer = 1;
//   for (int i = 0; i < n - 1; i++) {
//     int left = 0, right = 0;

//     for (int l = 0; l < pointer; l++) {
//       left += arr[l];
//     }
//     for (int r = pointer + 1; r < n; r++) {
//       right += arr[r];
//     }

//     if (left == right)
//       return pointer;
//     else
//       pointer++;
//   }

//   return -1;
// }
