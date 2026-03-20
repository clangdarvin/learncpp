#include <iostream>

double addNumbers() {
  int const x{5};
  int const y_num{10};
  return x + y_num;
}
int main() {
  int const x{10};
  int y{0};
  int z;
  std::cout << "10/0: " << (x / y) << '\n';
  std::cout << addNumbers() << '\n';
  std::cout << z << '\n';
  return 0;
}
