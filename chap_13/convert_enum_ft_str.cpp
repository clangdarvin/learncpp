#include <iostream>
#include <optional>
#include <string_view>
namespace {
enum Color { black, red, blue, green };
constexpr std::string_view getColorName(Color color) {
  switch (color) {
    case black:
      return "black";
    case red:
      return "red";
    case blue:
      return "blue";
    case green:
      return "green";
    default:
      return "???";
  }
}

constexpr std::optional<Color> getColorFromString(std::string_view sv) {
  if (sv == "black") {
    return black;
  }
  if (sv == "red") {
    return red;
  }
  if (sv == "blue") {
    return blue;
  }
  if (sv == "green") {
    return green;
  }
  return {};
}
void displayColorMenu() {
  std::cout << "0: black, 1: red, 2: blue, 3: green" << '\n';
}
}  // namespace

auto main() -> int {
  Color shirt{black};
  std::cout << "Shirt: " << getColorName(shirt) << '\n';
  displayColorMenu();
  std::cout << "Enter a color: ";
  int input{};
  std::cin >> input;
  if (input < 0 || input > 3) {
    std::cout << "Invalid Color" << '\n';
  } else {
    Color color{static_cast<Color>(input)};
    std::cout << "You chose " << getColorName(color) << '\n';
  }

  std::cout << "Enter a color: ";
  std::string s{};
  std::cin >> s;
  std::optional<Color> opt_color{getColorFromString(s)};
  if (!opt_color) {
    std::cout << "Invalid color." << '\n';
  } else {
    std::cout << "Color: " << getColorName(*opt_color) << '\n';
  }

  return 0;
}
