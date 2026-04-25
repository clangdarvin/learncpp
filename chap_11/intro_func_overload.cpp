#include <iostream>
namespace {
auto add(int x, int y) { return x + y; };
auto add(double x, double y) { return x + y; };
}  // namespace

auto main() -> int {
  std::cout << add(12, 2) << '\n';
  std::cout << add(10.5, 9.8) << '\n';
  return 0;
}
