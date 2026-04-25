#include <iostream>
namespace Constants {
inline constexpr double pi{3.14159};
}
namespace {
using Degrees = double;
using Radians = double;

auto convertToRadians(Degrees degrees) { return degrees * Constants::pi / 180; }

void question1() {
  int a{5};    // no conv needed
  int b{'a'};  // numeric conv
  // int c{5.4};                    // won't compile
  int d{true};                   // numeric prom
  int e{static_cast<int>(5.4)};  // numeric conv
  double f{5.0f};                // numeric prom
  double g{5};                   // numeric conv
  long h{5};                     // numeric conv
  // float i{f};                    // won't compile
  float j{5.0};  // numeric conv
}

void question2() {
  std::cout << "Number of degrees: ";
  Radians degrees{};
  std::cin >> degrees;

  Radians radians{convertToRadians(degrees)};
  std::cout << degrees << " degrees is " << radians << " radians." << '\n';
}
}  // namespace

auto main() -> int {
  question2();
  return 0;
}
