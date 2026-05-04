#include <iostream>
#include <string>
#include <string_view>

namespace {
std::string& getRef(std::string& s) { return s; }
void displayValAddr(const std::string s) {
  std::cout << s << '\n';
  std::cout << &s << '\n';
}

const std::string& getConstRef(std::string& s) { return s; }
constexpr std::string_view getConstExprView(std::string_view sv) { return sv; }
void displayAutoConstRefExample() {
  std::string s{"C++"};
  const auto& ref4{getConstRef(s)};
  constexpr std::string_view compile_time_string{"C++"};
  constexpr auto view2 = getConstExprView(compile_time_string);
}

}  // namespace

auto main() -> int {
  std::string s{"C++"};
  auto& ref{getRef(s)};
  displayValAddr(ref);
  // displayAutoRefExamples();
  displayAutoConstRefExample();
  return 0;

}  // namespace

// Best practice: use const auto& ref
