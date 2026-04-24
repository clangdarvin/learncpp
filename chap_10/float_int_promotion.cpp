#include <iostream>
namespace {
void printDouble(double d) { std::cout << d << '\n'; }
void printInt(int x) { std::cout << x << '\n'; }
}  // namespace
int main() {
  printDouble(5.0);
  printDouble(10.5f);

  std::cout << typeid(5.0).name() << '\n';
  std::cout << typeid(10.5f).name() << '\n';
  std::cout << typeid("C++").name() << '\n';

  printInt(2);
  short s{3};
  printInt(s);
  printInt('a');
  printInt(true);
  return 0;
}
