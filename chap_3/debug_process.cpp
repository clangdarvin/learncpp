#include <iostream>

// change the operator to addition (+) instead of subtraction (-)
int add(int x, int y) { return x - y; }

int main() {
  int const x{5};
  int const y{3};
  std::cout << "5 + 3 = " << add(x, y) << '\n';
  return 0;
}
