#include <iostream>
int main() {
  int x{5};
  int y{++x};

  int m{4};
  int n{m++};

  std::cout << "x: " << x << " y: " << y << '\n';
  std::cout << "m: " << m << " n: " << n << '\n';

  int i{10};
  int j{10};

  std::cout << i << " " << j << '\n';
  std::cout << ++i << " " << --j << '\n';  // Prefix
  std::cout << i << " " << j << '\n';
  std::cout << i++ << " " << j-- << '\n';  // Postfix
  std::cout << i << " " << j << '\n';
  return 0;
}
