#include <iostream>
int main() {
  constexpr double gravity{9.8};
  constexpr double required_gravity{9.8};
  if constexpr (gravity == required_gravity) {
    std::cout << "Gravity is normal" << '\n';
  } else {
    std::cout << "We are not on Earth" << '\n';
  }
  return 0;
}

// Best practice: constant expression, use constexpr if
