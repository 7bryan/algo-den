#include <algorithm>
#include <iostream>
#include <vector>

class Player {
private:
  struct magic_power {
    int fire, water, wind;
  };

  std::string name;
  int hp;
  int level;
  magic_power magic;

public:
  // constructor
  Player(std::string n, int h, int l, magic_power m)
      : name(n), hp(h), level(l), magic(m) {}

  void info() {
    std::cout << name << hp << level << std::endl
              << magic.fire << magic.water << magic.wind;
  }
};

int main() {
  std::cout << "Hello World";

  Player player("bryan", 100, 10, {1, 2, 3});
  player.info();

  return 0;
}
