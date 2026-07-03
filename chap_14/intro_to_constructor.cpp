#include <iostream>
class Foo {
 public:
  Foo(int x, int y) : m_x(x), m_y(y) {
    std::cout << "Foo constructed. " << x << " " << y << '\n';
  }

  void print() const { std::cout << m_x << ", " << m_y << '\n'; }

 private:
  int m_x{};
  int m_y{};
};

auto main() -> int {
  Foo foo(6, 7);
  foo.print();
  return 0;
}
