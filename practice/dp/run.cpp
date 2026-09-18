// penyisihan NPC senior > B
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimasi I/O agar proses baca tulis lebih cepat
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1, s2;
  // Cek apakah ada input
  cin >> s1 >> s2;

  int n = s1.length();
  int m = s2.length();

  // OPTIMASI MEMORI:
  // Daripada membuat dp[10005][10005] yang butuh 400MB,
  // kita hanya butuh baris "sebelumnya" dan baris "saat ini".
  // Ukuran vektor m + 1 karena kita memperhitungkan panjang 0 (string kosong).
  vector<int> prev_row(m + 1);
  vector<int> curr_row(m + 1);

  // BASE CASE 1:
  // Jika S1 kosong, cara satu-satunya mengubahnya menjadi S2
  // adalah dengan menyisipkan huruf (Insert) sebanyak j kali.
  for (int j = 0; j <= m; j++) {
    prev_row[j] = j;
  }

  // Mengisi tabel DP
  for (int i = 1; i <= n; i++) {
    // BASE CASE 2:
    // Jika S2 kosong, cara satu-satunya mengubah S1 menjadi S2
    // adalah dengan menghapus huruf (Delete) sebanyak i kali.
    curr_row[0] = i;

    for (int j = 1; j <= m; j++) {
      // Karena indeks string dimulai dari 0, huruf ke-i ada di indeks i-1
      if (s1[i - 1] == s2[j - 1]) {
        // Jika hurufnya SAMA, tidak butuh operasi tambahan.
        // Ambil nilai dari kondisi sebelumnya sebelum kedua huruf ini
        // dievaluasi.
        curr_row[j] = prev_row[j - 1];
      } else {
        // Jika hurufnya BEDA, cari operasi yang butuh biaya (langkah) terkecil,
        // lalu tambah 1 karena kita melakukan sebuah aksi.
        curr_row[j] = 1 + min({
                              curr_row[j - 1], // INSERT: Menyisipkan huruf
                              prev_row[j],     // DELETE: Menghapus huruf
                              prev_row[j - 1]  // REPLACE: Mengganti huruf
                          });
      }
    }

    // Setelah satu baris selesai dihitung, baris "saat ini" (curr_row)
    // akan menjadi baris "sebelumnya" (prev_row) untuk perulangan i berikutnya.
    prev_row = curr_row;
  }

  // Jawaban akhir berada di ujung kanan baris terakhir
  cout << prev_row[m] << "\n";

  return 0;
}
