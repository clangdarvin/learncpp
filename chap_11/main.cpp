
#include <iostream>

#include "max.h"
void foo();

auto main() -> int {
  std::cout << max(18, 3) << '\n';
  foo();
  return 0;
}
