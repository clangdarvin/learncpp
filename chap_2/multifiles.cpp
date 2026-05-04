#include <iostream>

#include "input.hpp"

int main() {
  int x{getInteger()};
  int y{getInteger()};
  std::cout << "x + y: " << (x + y) << std::endl;
  return 0;
}
