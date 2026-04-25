#include <iostream>
namespace {
auto addNumbers(int x, int y) { return x + y; }
auto add(unsigned short x, char y) { return x + y; }
void addAndPrint(auto x, auto y) { std::cout << (x + y) << '\n'; }
}  // namespace
auto main() -> int {
  auto divide(double x, double y) -> double;
  auto startGame() -> void;
  addAndPrint(10.5, 5);
  return 0;
}
