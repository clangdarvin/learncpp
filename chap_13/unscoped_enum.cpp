#include <iostream>
#include <optional>
namespace {
enum Color { red, green, blue };
enum Pets { dog, cat };
enum DaysOfWeek {
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday
};
enum Directions { north, east, west, south };
enum States { wake, sleep, eat, code, relax };
enum Operations { addition, subtraction, multiplication, division };
enum Archetypes { attack, defense, hybrid };
enum Weapons { pistol, sniper, knife, rpg };
enum Difficulty { easy, medium, hard, nightmare };

std::optional<int> calculator(Operations opr, int x, int y) {
  switch (opr) {
    case addition:
      return x + y;
    case subtraction:
      return x - y;
    case multiplication:
      return x * y;
    case division:
      if (y == 0) {
        return {};
      }
      return x / y;
    default:
      std::cout << "Invalid operator. " << '\n';
      return {};
  }
}

void quiz() {
  enum MonsterType { orc, goblin, troll, ogre, skeleton };
  MonsterType monster{troll};
  std::cout << monster << '\n';
}
}  // namespace
auto main() -> int {
  Color apple{red};
  Color shirt{green};
  Color sky{blue};
  std::cout << "Apple: " << apple << '\n';
  std::cout << "Shirt: " << shirt << '\n';
  std::cout << "Sky: " << sky << '\n';

  int x{10};
  int y{0};

  std::optional<int> result{calculator(division, x, y)};
  if (!result) {
    std::cout << "Failed." << '\n';
  } else {
    std::cout << "Result: " << *result << '\n';
  }
  quiz();

  if (shirt != green) {
    std::cout << "You're not wearing blue." << '\n';
  } else {
    std::cout << "Since you're wearing green, are you into nature stuff?"
              << '\n';
  }
  return 0;
}
