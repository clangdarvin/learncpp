#include <iostream>

class Foo {
 public:
  Foo() { std::cout << "Default Constructor\n"; }

  explicit Foo(int x) { std::cout << "Normal Constructor " << x << '\n'; }

  Foo(const Foo&) { std::cout << "Copy Constructor\n"; }
};

class Something {
 public:
  Something() = default;
  Something(const Something&) {
    std::cout << "Copy constructor called" << '\n';
  }
};

Something rvo() { return Something{}; }
Something nrvo() {
  Something s{};
  return s;
}

auto main() -> int {
  Foo foo_a{};
  Foo foo_b{10};
  Foo foo_c{foo_b};

  Something s1{rvo()};
  Something s2{nrvo()};
  return 0;
}
