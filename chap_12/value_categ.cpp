#include <iostream>
#include <string_view>
namespace {
void lvalue() {
  int x{};
  constexpr double d{};
  int y{x};
  constexpr double e{d};
}

constexpr int give5() { return 5; }

void rvalue() {
  constexpr int x{5};
  constexpr double d{1.2};
  constexpr int z{give5()};
  constexpr int w{x + 1};
  constexpr int q{static_cast<int>(d)};

  std::cout << "x: " << x << '\n';
  std::cout << "d: " << d << '\n';
  std::cout << "z: " << z << '\n';
  std::cout << "w: " << w << '\n';
  std::cout << "q: " << q << '\n';
}

template <typename T>
constexpr auto is_lvalue(T&) {
  return true;
}

template <typename T>
constexpr auto is_lvalue(T&&) {
  return false;
}

#define PRINTVCAT(expr)                                       \
  {                                                           \
    std::cout << #expr << " is an "                           \
              << (is_lvalue(expr) ? "lvalue\n" : "rvalue\n"); \
  }
}  // namespace

auto main() -> int {
  // rvalue();
  PRINTVCAT(5);
  PRINTVCAT(give5());
  int x{10};
  PRINTVCAT(x);
  PRINTVCAT(std::string_view{"Hi!"});
  PRINTVCAT("C++");
  PRINTVCAT(++x);
  PRINTVCAT(x++);
  return 0;
}
