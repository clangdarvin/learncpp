#include <cstdlib>
#include <iostream>
namespace {
bool printIntDivision(int x, int y) {
  if (y == 0) {
    std::cout << "Error: Could not divide by zero." << '\n';
    return false;
  }

  std::cout << (x / y) << '\n';
  return true;
}

double doIntDivision(int x, int y) {
  if (y == 0) {
    std::cout << "Error: Could not divide by zero" << '\n';
    std::exit(1);
  }
  return (x / y);
}

double reciprocal(double x) {
  constexpr double error_no_reciprocal{0.0};
  if (x == 0) {
    return error_no_reciprocal;
  }
  return 1.0 / x;
}
}  // namespace
int main() {
  // printIntDivision(15, 3);
  // printIntDivision(15, 0);
  // std::cout << reciprocal(0.0) << '\n';
  // std::cout << reciprocal(5.0) << '\n';
  std::cout << doIntDivision(5, 0) << '\n';
  std::cout << doIntDivision(5, 2) << '\n';

  return 0;
}
