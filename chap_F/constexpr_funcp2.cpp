#include <iostream>
namespace {
constexpr int moo(int);  // forward declaration

constexpr int goo(int c) { return moo(c); }
constexpr int moo(int b) { return b; }

int getValue(int x) { return x; }
constexpr int foo(int x) {
  if (x < 0) {
    return 0;
  } else {
    return getValue(x);
  }
}

constexpr auto max(int x, int y) { return (x > y) ? x : y; };

}  // namespace

auto main() -> int {
  // int x{foo(5)};
  // constexpr int y{foo(5)};
  // constexpr int a{goo(5)};
  constexpr int g{max(5, 6)};      // compile-time
  std::cout << max(3, 1) << '\n';  // runtime or compile-time

  int x{9};
  std::cout << max(x, 6) << '\n';  // runtime
  return 0;
}
