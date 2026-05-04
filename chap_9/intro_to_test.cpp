#include <cassert>
#include <iostream>
namespace {
bool isLowerVowel(char c) {
  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return true;
    default:
      return false;
  }
}

int testVowel() {
  assert(isLowerVowel('a'));
  assert(isLowerVowel('e'));
  assert(isLowerVowel('i'));
  assert(isLowerVowel('o'));
  assert(isLowerVowel('u'));
  assert(!isLowerVowel('z'));
  assert(!isLowerVowel('r'));
  assert(!isLowerVowel('q'));

  return 0;
}
}  // namespace

int main() {
  testVowel();

  std::cout << "All test passed!" << '\n';
  return 0;
}
