#include <iostream>
bool checkIfNumbersAreEqual(int x, int y) { return x == y; }

int main() {
  std::cout << "Enter x: ";
  int x{};
  std::cin >> x;

  std::cout << "Enter y: ";
  int y{};
  std::cin >> y;

  std::cout << std::boolalpha;

  std::cout << "Is x and y equal? " << checkIfNumbersAreEqual(x, y) << '\n';
  return 0;
}
