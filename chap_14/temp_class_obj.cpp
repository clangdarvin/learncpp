#include <iostream>
#include <string>
#include <string_view>

#include "print_string.h"
class IntPair {
 public:
  IntPair(int x, int y) : m_x(x), m_y(y) {}

  int getX() const { return m_x; }
  int getY() const { return m_y; }

 private:
  int m_x{};
  int m_y{};
};

void print(IntPair pair) {
  std::cout << "(" << pair.getX() << ", " << pair.getY() << ")" << '\n';
}

IntPair returnIPA() { return IntPair{10, 20}; }

IntPair returnIPB() { return {100, 200}; }
auto main() -> int {
  IntPair p1{2, 6};
  print(p1);

  print(IntPair{4, 8});

  print({11, 13});

  print(returnIPA());
  print(returnIPB());

  char ch{'C'};  // I want the CHAR to be an INT
  std::cout << static_cast<int>(ch) << '\n';

  std::string_view sv{"C++ Programmer"};
  printString(static_cast<std::string>(sv));

  return 0;
}

// List initialization is preferred in modern c++
