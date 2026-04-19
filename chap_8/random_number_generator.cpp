#include <iostream>
int incrementByOne() {
  static int s_state{3};
  ++s_state;
  return s_state;
}

int main() {
  std::cout << incrementByOne() << '\n';
  std::cout << incrementByOne() << '\n';
  std::cout << incrementByOne() << '\n';
  return 0;
}

/*

*/
