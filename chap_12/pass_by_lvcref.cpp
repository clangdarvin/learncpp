#include <iostream>
#include <string>
#include <string_view>
namespace {
void printRef(const int& x) { std::cout << x << '\n'; }
void foo(int a, int& b, std::string_view c) {
  std::cout << a << '\n';
  std::cout << b << '\n';
  std::cout << c << '\n';
}
}  // namespace

auto main() -> int {
  int x{10};
  printRef(x);

  const int y{15};
  printRef(y);

  printRef(20);

  int c{5};
  const std::string s{"C++"};
  foo(10, c, s);
  return 0;
}

// Fundamental Type: value
// Class Types: const reference
// Use reference when arguments are needed to be modified by a function
