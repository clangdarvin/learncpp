#include <iostream>
#include <type_traits>
namespace {
consteval auto max(int x, int y) { return (x > y) ? x : y; }

consteval auto CONSTEVAL(auto value) { return value; }

constexpr auto compare(int x, int y) {
  if (std::is_constant_evaluated()) {
    return (x > y) ? x : y;
  }
  return (x < y) ? x : y;
}
}  // namespace

auto main() -> int {
  std::cout << CONSTEVAL(compare(5, 6)) << '\n';
  return 0;
}
