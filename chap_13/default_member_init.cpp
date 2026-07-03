#include <iostream>
struct Foo {
  int x{};  // without initilization it's undefined
  int y{};
  int z{10};
};

void displayFoo(Foo& foo) {
  std::cout << "x: " << foo.x << '\n';
  std::cout << "y: " << foo.y << '\n';
  std::cout << "z: " << foo.z << '\n';
  std::cout << '\n';
}

auto main() -> int {
  Foo f1;
  Foo f2{5, 10, 15};
  Foo f3{};

  displayFoo(f1);
  displayFoo(f2);
  displayFoo(f3);
  return 0;
}
