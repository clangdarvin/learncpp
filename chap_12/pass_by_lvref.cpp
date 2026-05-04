#include <iostream>
#include <string>
namespace {
void printValue(std::string& v) { std::cout << v << '\n'; }
void printAddresses(const int v, const int& ref) {
  std::cout << "Address of v parameter: " << &v << '\n';
  std::cout << "Address of ref parameter: " << &ref << '\n';
}

void addOne(int& y) { ++y; }
}  // namespace

auto main() -> int {
  std::string x{"I love C++"};
  printValue(x);

  const int z{10};
  std::cout << "Address of z: " << &z << '\n';

  printAddresses(z, z);

  int a{5};
  std::cout << "a: " << a << '\n';
  addOne(a);
  std::cout << "a: " << a << '\n';
  return 0;
}
