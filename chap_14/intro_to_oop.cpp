#include <iostream>
#include <string>
#include <string_view>
enum AnimalType { cat, dog, chicken, snake };
constexpr std::string_view animalName(AnimalType type) {
  switch (type) {
    case cat:
      return "cat";
    case dog:
      return "dog";
    case chicken:
      return "chicken";
    case snake:
      return "snake";
    default:
      return "";
  }
}

constexpr int numLegs(AnimalType type) {
  switch (type) {
    case cat:
    case dog:
      return 4;
    case chicken:
      return 2;
    case snake:
    default:
      return 0;
  }
}

// OOP mindset
struct Cat {
  std::string_view name{"cat"};
  int numLegs{4};
};

struct Dog {
  std::string_view name{"dog"};
  int numLegs{4};
};

struct Chicken {
  std::string_view name{"chicken"};
  int numLegs{2};
};

struct Snake {
  std::string_view name{"snake"};
  int numLegs{0};
};

auto main() -> int {
  constexpr AnimalType animal{snake};
  std::cout << "A " << animalName(animal) << " has " << numLegs(animal)
            << " legs" << '\n';

  // Approach is OOP-like
  constexpr Cat cat;
  std::cout << "A " << cat.name << " has " << cat.numLegs << " legs" << '\n';

  constexpr Snake snake;
  std::cout << "A " << snake.name << " has " << snake.numLegs << " legs"
            << '\n';
  return 0;
}
