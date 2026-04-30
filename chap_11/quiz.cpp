#include <iostream>
namespace {
template <typename T, typename U>
auto add(T x, U y) {
  return x + y;
}

template <typename T>
auto mult(T x, int y) {
  return x * y;
}

template <typename T, typename U>
auto sub(T x, U y) {
  return x - y;
}

}  // namespace

auto main() -> int {
  std::cout << add(2, 3) << '\n';
  std::cout << add(1.2, 3.4) << '\n';

  std::cout << mult(2, 3) << '\n';
  std::cout << mult(1.2, 3) << '\n';

  std::cout << sub(3, 2) << '\n';
  std::cout << sub(3.5, 2) << '\n';
  std::cout << sub(4, 1.5) << '\n';
  return 0;
}
