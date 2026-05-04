#include <iostream>
namespace {
void spam(int n_iterations) {
  std::cout << "----- n: " << n_iterations << " -----" << '\n';
  for (int i{0}; i < n_iterations; ++i) {
    std::cout << "\tSpam!" << '\n';
  }
}

void testSpam() {
  spam(0);
  spam(1);
  spam(2);
}

bool isLowerVowel(char c, bool yIsVowel) {
  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return true;
    case 'y':
      return yIsVowel;
    default:
      return false;
  }
}

void testIsLowerVowel() {
  std::cout << isLowerVowel('a', false) << '\n';
  std::cout << isLowerVowel('z', true) << '\n';
  std::cout << isLowerVowel('y', true) << '\n';
  std::cout << isLowerVowel('y', false) << '\n';
}
}  // namespace

int main() {
  // testSpam();
  testIsLowerVowel();
  return 0;
}
// Best practice: aim for 100% branch coverage
