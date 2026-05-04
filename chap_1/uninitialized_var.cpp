#include <iostream>
void doNothing(int&) {}

int main() {
  int x{};
  doNothing(x);
  std::cout << x << "\n";
  std::cout << sizeof(int) << "\n";

  return 0;
}
