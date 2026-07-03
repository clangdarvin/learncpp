#include <iostream>
#include <stdexcept>
#include <string_view>
class Foo {
 public:
  Foo(int x, int y) : m_x(x), m_y(y) {
    std::cout << "Foo constructed." << '\n';
  }

  void print() const { std::cout << "x: " << m_x << ", y: " << m_y << '\n'; }

 private:
  int m_x{};
  int m_y{};
};

class Fraction {
 public:
  Fraction(int numerator, int denominator)
      : m_numerator(numerator), m_denominator(denominator) {
    if (denominator == 0) {
      throw std::invalid_argument(
          "Denominator cannot be zero.");  // Throwing an exception is the best
                                           // thing to do
    }
  }

  int divide() const {
    if (m_numerator == 0) {
      return 0;
    }
    return m_numerator / m_denominator;
  }

 private:
  int m_numerator{};
  int m_denominator{};
};

class Ball {
 public:
  Ball(std::string_view color, double radius)
      : m_color(color), m_radius(radius) {};

  const std::string& getColor() const { return m_color; }
  double getRadius() const { return m_radius; }

 private:
  std::string m_color;
  double m_radius;
};

void print(const Ball& ball) {
  std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")"
            << '\n';
}

auto main() -> int {
  Foo foo(5, 10);
  foo.print();

  Fraction f{5, 2};
  std::cout << f.divide() << '\n';

  Ball b("Black", 4.5);
  print(b);
  return 0;
}

// Member Initialization List (Class) != Initializer List (Struct)
