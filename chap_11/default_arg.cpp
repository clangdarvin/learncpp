#include <iostream>
namespace {
auto addNumbers(int x, int y = 5) { return x + y; }
}  // namespace

auto main() -> int {
  auto sum{addNumbers(12, 10)};
  std::cout << "Sum: " << sum << '\n';
  sum = addNumbers(5);

  std::cout << "Sum: " << sum << '\n';
  return 0;
}
