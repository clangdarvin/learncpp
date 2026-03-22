#include <iostream>
int getValue() {
  std::cerr << "getValue() call\n";
  return 4;
}
int main() {
  std::cerr << "main() called\n";
  std::cout << getValue() << '\n';
  return 0;
}

// Adding debug statements isn't recommended
