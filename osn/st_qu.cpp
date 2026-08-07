// OSN 2009 > 2E
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> nums;

  string command;
  int num;

  while (N--) {
    cin >> command;

    if (command == "push_front") {
      cin >> num;
      nums.insert(nums.begin(), num);
    } else if (command == "push_back") {
      cin >> num;
      nums.push_back(num);
    } else if (command == "pop_back") {
      nums.pop_back();
    } else {
      nums.erase(nums.begin());
    }
  }

  for (int &num : nums) {
    cout << num << "\n";
  }

  return 0;
}
