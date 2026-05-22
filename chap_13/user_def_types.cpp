#include <iostream>
#include <optional>

#include "fraction.h"
namespace {
using Length = int;

std::optional<int> performDivision(int x, int y) {
  if (y == 0) {
    return {};
  }
  return x / y;
}
}  // namespace

auto main() -> int {
  // Length x{110};
  Fraction f{.numerator = 4, .denominator = 0};
  std::cout << f.numerator << " " << f.denominator << '\n';
  std::optional<int> quotient{performDivision(f.numerator, f.denominator)};
  if (!quotient) {
    std::cout << "denominator is zero.";
  } else {
    std::cout << "Quotient: " << *quotient << '\n';
  }
  return 0;
}

// enums and class (struct, class, unions)
