#include <iostream>
class Foo {
 public:
  // Foo() = default;
  Foo(int x, int y) : m_x(x), m_y(y) {
    std::cout << "Foo constructed: " << m_x << ", " << m_y << '\n';
  }

 private:
  int m_x{};
  int m_y{};
};

class Fraction {
 public:
  Fraction() = default;
  Fraction(int numerator, int denominator)
      : m_numerator(numerator), m_denominator(denominator) {
    if (denominator == 0) {
      throw std::invalid_argument(
          "Denominator cannot be zero.");  // Throwing an exception is the best
                                           // thing to do
    }
  };

  void print() const {
    std::cout << "Fraction(" << m_numerator << ", " << m_denominator
              << "): " << m_numerator / m_denominator << '\n';
  }

 private:
  int m_numerator{0};
  int m_denominator{1};
};
auto main() -> int {
  Foo f2(5, 10);
  Fraction frac{10, 3};
  frac.print();
  Fraction frac_b{};
  frac_b.print();
  return 0;
}
