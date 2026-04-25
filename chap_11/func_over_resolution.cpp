#include <iostream>
namespace {
auto foo(int x) {}
auto foo(double x) {}
auto print(char ch, int x) { std::cout << 'a' << '\n'; }
auto print(char ch, double x) { std::cout << 'b' << '\n'; }
auto print(char ch, float x) { std::cout << 'c' << '\n'; }
}  // namespace

auto main() -> int {
  // foo(5L);
  print('r', '/');
  return 0;
}
