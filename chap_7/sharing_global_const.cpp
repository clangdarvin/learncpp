#include <iostream>

#include "constants.h"

int main() {
  std::cout << "Enter a radius: ";
  double radius{};
  std::cin >> radius;

  std::cout << "The circumference is " << (2 * radius * constants::pi) << '\n';
  return 0;
}

// Best Practice: constants.h + this_code.cpp
