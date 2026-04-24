#include <cassert>
#include <cmath>
#include <iostream>
namespace {
void printDivision(int x, int y) {
  if (y == 0) {
    std::cerr << "Error: Could not divide by zero." << '\n';
    return;
  }
  std::cout << static_cast<double>(x) / y << '\n';
}

double calculateTimeUntilObjectHitsGround(double initial_height,
                                          double gravity) {
  assert(gravity > 0.0);

  if (initial_height <= 0.0) {
    return 0.0;
  }
  return std::sqrt((2 * initial_height) / gravity);
}

double getInverse(int x) {
  assert(x != 0);
  if (x == 0) {
    std::cerr << "X must not be zero nor negative." << '\n';
  }
  return 1.0 / x;
}
}  // namespace

int main() {
  // printDivision(10, 5);
  // printDivision(10, 0);
  // std::cout << "Took " << calculateTimeUntilObjectHitsGround(100, 9.8) <<
  // '\n';

  // std::cout << "Took " << calculateTimeUntilObjectHitsGround(100, 0) << '\n';
  std::cout << getInverse(5) << '\n';
  std::cout << getInverse(0) << '\n';
  return 0;
}
