#include <iostream>
void createTruthTable() {
  constexpr int n{2};  // x and y
  int values{1};

  for (int i = 0; i < n; i++) {
    values *= 2;  // compute 2^n
  }

  int x{};
  int y{};

  for (int i = 0; i < values; i++) {
    x = (i / 2) % 2;
    y = i % 2;

    std::cout << "x: " << x << '\t';
    std::cout << "y: " << y << '\n';
  }
}
int main() {
  constexpr bool x{true};
  constexpr bool y{true};
  std::cout << std::boolalpha;

  std::cout << "x: " << x << ", y: " << y << '\n';
  std::cout << "!(x && y): " << !(x && y) << '\n';
  std::cout << "Applying De Morgan's Law to !(x && y): " << (!x || !y) << '\n';

  std::cout << "!(x || y): " << !(x || y) << '\n';
  std::cout << "Applying De Morgan's Law to !(x || y): " << (!x && !y) << '\n';

  std::cout << '\n';
  createTruthTable();
  return 0;
}
