// 2023 penyisihan senior > A
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<char, int> rank_val = {{'6', 1}, {'7', 2}, {'8', 3},
                                     {'9', 4}, {'T', 5}, {'J', 6},
                                     {'Q', 7}, {'K', 8}, {'A', 9}};

string solve() {
  int N, M;
  char truf;
  cin >> N >> M >> truf;

  vector<string> pemain(N);
  vector<string> lawan(M);

  for (int i = 0; i < N; i++)
    cin >> pemain[i];
  for (int i = 0; i < M; i++)
    cin >> lawan[i];

  // Track which of Pisi's cards have already been used
  vector<bool> used_pemain(N, false);

  // Step 1: Match opponent non-trump cards with same-suit non-trump cards
  for (int i = 0; i < M; i++) {
    if (lawan[i][1] == truf)
      continue; // Skip trump cards for now

    int best_idx = -1;
    int min_rank = 100;

    for (int j = 0; j < N; j++) {
      if (used_pemain[j])
        continue;

      // Must match suit and be a higher rank
      if (pemain[j][1] == lawan[i][1] &&
          rank_val[pemain[j][0]] > rank_val[lawan[i][0]]) {
        if (rank_val[pemain[j][0]] < min_rank) {
          min_rank = rank_val[pemain[j][0]];
          best_idx = j;
        }
      }
    }

    if (best_idx != -1) {
      used_pemain[best_idx] = true;
      lawan[i] = ""; // Mark opponent card as defeated
    }
  }

  // Step 2: Match remaining non-trump opponent cards using Pisi's smallest
  // TRUMP cards
  for (int i = 0; i < M; i++) {
    if (lawan[i].empty() || lawan[i][1] == truf)
      continue;

    int best_idx = -1;
    int min_rank = 100;

    for (int j = 0; j < N; j++) {
      if (used_pemain[j])
        continue;

      if (pemain[j][1] == truf) {
        if (rank_val[pemain[j][0]] < min_rank) {
          min_rank = rank_val[pemain[j][0]];
          best_idx = j;
        }
      }
    }

    if (best_idx != -1) {
      used_pemain[best_idx] = true;
      lawan[i] = ""; // Mark as defeated
    } else {
      return "TIDAK"; // Failed to beat non-trump card
    }
  }

  // Step 3: Match opponent TRUMP cards using Pisi's HIGHER TRUMP cards
  for (int i = 0; i < M; i++) {
    if (lawan[i].empty())
      continue; // Already defeated

    int best_idx = -1;
    int min_rank = 100;

    for (int j = 0; j < N; j++) {
      if (used_pemain[j])
        continue;

      if (pemain[j][1] == truf &&
          rank_val[pemain[j][0]] > rank_val[lawan[i][0]]) {
        if (rank_val[pemain[j][0]] < min_rank) {
          min_rank = rank_val[pemain[j][0]];
          best_idx = j;
        }
      }
    }

    if (best_idx != -1) {
      used_pemain[best_idx] = true;
      lawan[i] = "";
    } else {
      return "TIDAK"; // Failed to beat trump card
    }
  }

  return "YA";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  if (cin >> T) {
    while (T--) {
      cout << solve() << "\n";
    }
  }

  return 0;
}
