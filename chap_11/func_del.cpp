#include <iostream>
namespace {
auto printInt(int x) { std::cout << x << '\n'; }
template <typename T>
void printInt(T x) = delete;
}  // namespace

auto main() -> int {
  printInt(100);
  // printInt('a');
  // printInt(true);
  return 0;
}
