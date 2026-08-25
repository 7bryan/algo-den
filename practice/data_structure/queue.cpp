// B. Simulasi antrean
#include <bits/stdc++.h>
using namespace std;

int Q;
vector<int> antrean;

// Menandai indeks elemen paling depan yang valid
int head = 0;
// Menandai apakah antrean sedang dalam kondisi terbalik
bool is_reversed = false;

void command() {
  for (int i = 0; i < Q; i++) {
    string cmd;
    cin >> cmd;

    if (cmd == "add") {
      int x, y;
      cin >> x >> y;

      if (!is_reversed) {
        // Jika normal, masukkan ke ujung belakang vektor
        antrean.insert(antrean.end(), y, x);
      } else {
        // Jika terbalik, ujung belakang antrean sebenarnya adalah indeks 'head'
        // di vektor
        antrean.insert(antrean.begin() + head, y, x);
      }

      // Cetak total elemen yang ada di antrean saat ini
      cout << antrean.size() - head << "\n";

    } else if (cmd == "del") {
      int y;
      cin >> y;

      if (!is_reversed) {
        // Jika normal, elemen pertama yang keluar ada di posisi 'head'
        cout << antrean[head] << "\n";
        // Geser head ke kanan sebanyak y (menghapus secara logika)
        head += y;
      } else {
        // Jika terbalik, elemen pertama yang keluar ada di paling belakang
        // vektor
        cout << antrean.back() << "\n";
        // Hapus y elemen dari belakang vektor
        for (int j = 0; j < y; j++) {
          antrean.pop_back();
        }
      }

    } else if (cmd == "rev") {
      // Cukup balikkan status flag dalam waktu O(1)
      is_reversed = !is_reversed;
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
