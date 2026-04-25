#include <iostream>
#include <typeinfo>

int main() {
  int i{5};
  std::cout << typeid(i).name() << '\n';

  double d{3.15};
  std::cout << typeid(d).name() << '\n';

  std::cout << typeid(i + d).name() << ' ' << (i + d) << '\n';
  // double has a higher priority compared to int
  return 0;
}
