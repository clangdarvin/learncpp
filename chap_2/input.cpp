#include "input.hpp"

#include <iostream>

int getInteger() {
  std::cout << "Enter integer: ";
  int x{};
  std::cin >> x;
  return x;
}
