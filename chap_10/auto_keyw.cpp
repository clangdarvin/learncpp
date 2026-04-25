#include <iostream>
namespace {
int add(int x, int y) { return x + y; }
}  // namespace
//

int main() {
  using namespace std::literals;
  auto d{5.0};
  auto i{1 + 5};
  auto x{i};

  auto sum{add(5, 9)};
  constexpr auto model_conf_level{93.15};

  constexpr auto fave_programming_language{"C++"sv};
  const auto text_editor{"Neovim"s};

  std::cout << fave_programming_language << '\n';
  std::cout << text_editor << '\n';

  std::cout << typeid(fave_programming_language).name() << '\n';

  auto y{5.0};
  auto z{2.0};

  std::cout << (y / z) << '\n';

  return 0;
}
