#include <iostream>
#include <string_view>
namespace {
auto add(int x, int y) { return x + y; }
auto add(int x, int y, int z) { return x + y + z; }
auto add(int x, double y) { return x + y; }
auto displayPL(std::string_view programming_language, double latest_version) {
  std::cout << "Programming Language: " << programming_language << '\n';
  std::cout << "Latest Version: " << latest_version << '\n';
}
auto displayPL(std::string_view programming_language, double latest_version,
               std::string_view author) {
  std::cout << "Programming Language: " << programming_language << '\n';
  std::cout << "Latest Version: " << latest_version << '\n';
  std::cout << "Author: " << author << '\n';
}

}  // namespace

auto main() -> int {
  std::cout << add(5, 5) << '\n';
  std::cout << add(1, 2, 5) << '\n';
  displayPL("C++", 23.0);
  displayPL("Python", 3.14, "Guido van Rossum");
  return 0;
}
