#include <iostream>
int main() {
  unsigned short x{65535};
  std::cout << "x was: " << x << '\n';

  x = 65536;
  std::cout << "x was: " << x << '\n';

  x = 65537;
  std::cout << "x was: " << x << '\n';

  std::cout << '\n';

  unsigned short y{0};
  std::cout << "y was: " << y << '\n';

  y = -1;
  std::cout << "y was: " << y << '\n';

  y = -2;
  std::cout << "y was: " << y << '\n';

  std::cout << '\n';

  unsigned const int a{5};
  unsigned const int b{10};
  std::cout << "a-b: " << (a - b) << '\n';
  // Nuclear Gahdhi - a bug in the Civilization game caused by an underflow
  // error
  // Useful when you have a processor/memory constraints
  return 0;
}
