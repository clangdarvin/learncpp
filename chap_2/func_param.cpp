#include <iostream>

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }
int divide(int x, int y) { return x / y; }
int subtract(int x, int y) { return x - y; }

void perform_calculation(int x, int y) {}

int main() {
  int x{10}, y{2};
  std::cout << add(x, y) << "\n";
  std::cout << multiply(x, y) << "\n";
  std::cout << divide(x, y) << "\n";
  std::cout << subtract(x, y) << "\n";
  return 0;
}
