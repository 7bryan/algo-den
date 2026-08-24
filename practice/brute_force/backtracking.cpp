// B. Perkenalan brute force rekursif: backtracking
#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> combination;

void solve(int lastNum) {
  // baris kasus: jika sudah memilih sebanyak K tombol
  if (combination.size() == K) {
    // print semua angka dalam combination
    for (int i = 0; i < K; i++) {
      cout << combination[i] << " ";
    }
    cout << '\n';
    return;
  }

  // coba pilih angka berikutnya yang lebih besar dari angka terakhir (lastNum)
  for (int i = lastNum + 1; i <= N; i++) {
    combination.push_back(i); // pilih angka i

    solve(i); // recursion untuk memilih angka berikutnya

    combination.pop_back(); // backtrack (batalkan pilihan untuk mencoba angka
                            // berikutnya)
  }
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> K;

  solve(0); // mulai pencarian dari angka sebelum 1, yaitu 0;

  return 0;
}
