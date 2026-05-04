#include <cstddef>
#include <iostream>
#include <random>

#include "random.h"

int main() {
  std::cout << Random::get(1, 6) << '\n';
  std::cout << Random::get(1u, 6u) << '\n';

  std::uniform_int_distribution<> die6{1, 6};
  for (int i{1}; i <= 10; ++i) {
    std::cout << die6(Random::mt) << '\n';
  }
  return 0;
}
