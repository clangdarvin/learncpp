#include <iostream>
namespace {
int g_a{20};
}  // namespace

auto main() -> int {
  const int x{5};
  const int& ref{x};

  std::cout << ref << '\n';

  const int& aref{10};
  std::cout << aref << '\n';

  constexpr int& bref{g_a};
  std::cout << g_a << ", " << bref << '\n';

  static int s_b{30};
  constexpr int& cref{s_b};
  std::cout << s_b << ", " << cref << '\n';

  // int v{1};
  // constexpr int& dref{v}; Compile Error

  static const int s_l{15};
  constexpr const int& ref1{s_l};
  return 0;
}
