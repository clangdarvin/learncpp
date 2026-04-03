#include <iostream>
#include <string_view>
void printStrView(const std::string_view str) { std::cout << str << '\n'; }

int main() {
  constexpr std::string_view fave_linux_distro{"Ubuntu"};
  constexpr std::string_view fave_programming_language{"C++"};
  constexpr std::string_view currently_playing{
      "Marvel's Spider-Man: Miles Morales"};

  printStrView(fave_linux_distro);
  printStrView(fave_programming_language);
  printStrView(currently_playing);
}
