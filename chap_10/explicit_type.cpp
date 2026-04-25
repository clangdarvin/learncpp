#include <iostream>
int main() {
  char c{'A'};
  std::cout << static_cast<int>(c) << '\n';

  int x{5};
  int y{2};
  std::cout << static_cast<double>(x) / y << '\n';

  int i{95};
  char ch{static_cast<char>(i)};
  std::cout << ch << '\n';

  i = 100;
  i = static_cast<int>(i / 2.5);
  std::cout << i << '\n';

  return 0;
}
