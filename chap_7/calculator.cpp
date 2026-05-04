#include <iostream>

#include "math_utils.h"

int main() {
  constexpr int a{10};
  constexpr int b{0};

  std::cout << "Sum: " << BasicMath::addNumbers(a, b) << '\n';
  std::cout << "Difference: " << BasicMath::subtractNumbers(a, b) << '\n';
  std::cout << "Product: " << BasicMath::multiplyNumbers(a, b) << '\n';
  std::cout << "Quotient: " << BasicMath::divideNumbers(a, b) << '\n';
  return 0;
}
