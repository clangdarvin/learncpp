#include <iostream>
namespace {}

auto main() -> int {
  const int x{10};
  const int* ptr{&x};
  std::cout << *ptr << '\n';
  const int y{5};
  ptr = &y;
  std::cout << *ptr << '\n';

  int z{4};
  int* const aptr{&z};
  std::cout << *aptr << '\n';

  *aptr = 10;
  return 0;
}
