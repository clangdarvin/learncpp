#include <iostream>
#include <string>
namespace {
const std::string& getProgramName() {
  static const std::string s_program_name{"Calculator"};
  return s_program_name;
}

void counter() {
  static int s_count{0};
  ++s_count;
  std::cout << s_count << '\n';
}
}  // namespace

auto main() -> int {
  std::cout << "Program Name: " << getProgramName() << '\n';
  counter();
  counter();
  return 0;
}
