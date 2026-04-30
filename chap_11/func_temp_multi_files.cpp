#include <iostream>

#include "add.h"

auto main() -> int {
  std::cout << addOne(1) << '\n';
  std::cout << addOne(2.3) << '\n';
  return 0;
}
