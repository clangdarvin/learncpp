#include <iostream>

double addNumbers() {
  int const x{5};
  int const y{10};
  return x + y;
}
int main() {
  int const x{10};
  int const y{3};
  std::cout << "10/0: " << (x / y) << '\n';
  std::cout << addNumbers() << '\n';
  return 0;
}
