#include <iostream>
#include <string>
namespace {
// Question 1
struct Monster {
  enum Type { OGRE, DRAGON, ORC, SPIDER, SLIME };
  Type type{};
  std::string name;
  int health{};
};

constexpr std::string_view getMonsterType(Monster::Type monster) {
  switch (monster) {
    case Monster::OGRE:
      return "Ogre";
    case Monster::DRAGON:
      return "Dragon";
    case Monster::ORC:
      return "ORC";
    case Monster::SPIDER:
      return "Spider";
    case Monster::SLIME:
      return "Slime";
    default:
      return "";
  }
}

void printMonster(const Monster& monster) {
  std::cout << "This " << getMonsterType(monster.type) << " is named "
            << monster.name << " and it has " << monster.health << " HP"
            << '\n';
}

// Question 2
template <typename T>
struct Triad {
  T x{};
  T y{};
  T z{};
};

template <typename T>
void print(const Triad<T>& triad) {
  std::cout << "[" << triad.x << ", " << triad.y << ", " << triad.z << "]"
            << '\n';
}

}  // namespace
auto main() -> int {
  Monster m1{.type = Monster::OGRE, .name = "Odor", .health = 150};
  Monster m2{.type = Monster::SLIME, .name = "Blob", .health = 50};
  printMonster(m1);
  printMonster(m2);

  std::cout << '\n';

  Triad t1{.x = 5, .y = 10, .z = 15};
  print(t1);

  Triad t2{.x = 3.14, .y = 9.80, .z = 5.97};
  print(t2);
  return 0;
}
