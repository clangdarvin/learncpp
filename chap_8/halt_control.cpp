#include <cstdlib>
#include <iostream>

namespace {
void performCleanup() { std::cout << "Cleanup!" << '\n'; }
}  // namespace

int main() {
  // atexit(performCleanup);
  std::cout << 1 << '\n';
  // std::exit(0);
  std::abort();
  std::cout << 2 << '\n';
  return 0;
}
