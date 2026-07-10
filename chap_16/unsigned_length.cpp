#include <iostream>
#include <iterator>
#include <vector>
void foo(unsigned int u) {}
auto main() -> int {
  constexpr int x{10};
  unsigned int y{x};
  foo(y);

  std::vector<int> numbers{2, 4, 6, 8, 10};
  std::cout << "Size: " << static_cast<int>(std::ssize(numbers)) << '\n';
  std::cout << numbers.at(3) << '\n';
  // std::cout << numbers.at(10) << '\n'; // Throws exception

  std::vector<char> word{'h', 'e', 'l', 'l', 'o'};
  std::cout << "Size: " << word.size() << '\n';
  std::cout << "Element at index 1: " << word[1] << "," << word.at(1) << '\n';
  return 0;
}
