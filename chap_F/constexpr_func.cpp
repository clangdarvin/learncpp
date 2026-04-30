#include <iostream>
namespace {
constexpr auto calculateCircumference(double radius) {
  constexpr double pi{3.14159265359};
  return 2.0 * pi * radius;
}

constexpr auto getMax(int x, int y) { return (x > y) ? x : y; }
}  // namespace

auto main() -> int {
  constexpr double circumference{calculateCircumference(3.0)};
  std::cout << "Circumference: " << circumference << '\n';

  int x{5};
  int y{7};
  std::cout << getMax(x, y) << '\n';
  return 0;
}
