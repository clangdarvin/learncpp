#include <iostream>
int add() { return 6 + 8; }

void doIt(int x) {
  int y{4};
  std::cout << "doIt: x = " << x << " y = " << y << '\n';

  x = 3;
  std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main() {
  std::cout << add() << std::endl;
  int x{1};
  int y{2};

  std::cout << "main: x = " << x << " y = " << y << '\n';

  doIt(x);

  std::cout << "main: x = " << x << " y = " << y << '\n';
  return 0;
}
