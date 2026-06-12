#include <iostream>
#include <optional>
#include <ostream>
#include <string_view>
namespace {
enum class Difficulty { easy, medium, hard, nightmare };
enum class Animal { pig, chicken, goat, cat, dog, duck };

constexpr std::string_view getDifficultyLevel(Difficulty difficulty) {
  switch (difficulty) {
    case Difficulty::easy:
      return "easy";
    case Difficulty::medium:
      return "medium";
    case Difficulty::hard:
      return "hard";
    case Difficulty::nightmare:
      return "nightmare";
    default:
      return "invalid";
  }
}

constexpr std::string_view getAnimalName(Animal animal) {
  switch (animal) {
    case Animal::pig:
      return "pig";
    case Animal::chicken:
      return "chicken";
    case Animal::goat:
      return "goat";
    case Animal::cat:
      return "cat";
    case Animal::dog:
      return "dog";
    case Animal::duck:
      return "duck";
    default:
      return {};
  }
}

std::optional<int> getNumberOfLegs(Animal animal) {
  switch (animal) {
    case Animal::pig:
    case Animal::goat:
    case Animal::cat:
    case Animal::dog:
      return 4;
    case Animal::chicken:
    case Animal::duck:
      return 2;
    default:
      return {};
  }
}

void displayAnimalInfo(Animal animal) {
  std::optional<int> number_of_legs{getNumberOfLegs(animal)};
  if (!number_of_legs) {
    std::cout << "Invalid Animal." << '\n';
  } else {
    std::cout << "A " << getAnimalName(animal) << " has " << *number_of_legs
              << " legs." << '\n';
  }
}

// std::ostream& operator<<(std::ostream& os, Difficulty difficulty) {
//   return os << static_cast<int>(difficulty);
// }
}  // namespace

auto main() -> int {
  Difficulty diff_level{Difficulty::nightmare};
  std::cout << static_cast<int>(diff_level) << '\n';
  std::cout << "Game Difficulty: " << getDifficultyLevel(diff_level) << '\n';

  displayAnimalInfo(Animal::cat);
  displayAnimalInfo(Animal::chicken);
  displayAnimalInfo(static_cast<Animal>(99));
  return 0;
}
