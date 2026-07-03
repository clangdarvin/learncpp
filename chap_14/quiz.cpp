#include <cmath>
#include <iostream>

class Point2D {
 public:
  Point2D() = default;
  explicit Point2D(double x, double y) : m_x(x), m_y(y) {}
  void print() const {
    std::cout << "Point2D(" << m_x << ", " << m_y << ")" << '\n';
  }

  double distanceTo(const Point2D& p) const {
    return std::sqrt(((m_x - p.m_x) * (m_x - p.m_x)) +
                     ((m_y - p.m_y) * (m_y - p.m_y)));
  }

 private:
  double m_x{0.0};
  double m_y{0.0};
};

class Fraction {
 public:
  Fraction(int numerator = 0, int denominator = 1)
      : m_numerator(numerator), m_denominator(denominator) {
    if (m_denominator == 0) {
      throw std::invalid_argument("Denominator cannot be zero.");
    }
  }

  void setNumerator(int numerator) { m_numerator = numerator; }

  void setDenominator(int denominator) {
    if (denominator == 0) {
      throw std::invalid_argument("Denominator cannot be zero.");
    }
    m_denominator = denominator;
  }

  int getNumerator() const { return m_numerator; }
  int getDenominator() const { return m_denominator; }

  Fraction multiply(const Fraction& f2) const {
    return Fraction{m_numerator * f2.m_numerator,
                    m_denominator * f2.m_denominator};
  }

 private:
  int m_numerator{0};
  int m_denominator{1};
};

void printFraction(const Fraction& f) {
  std::cout << f.getNumerator() << "/" << f.getDenominator() << '\n';
}

auto main() -> int {
  Point2D pf{};
  Point2D ps{3.0, 4.0};
  pf.print();
  ps.print();

  std::cout << "Distance between to points: " << pf.distanceTo(ps) << '\n';

  Fraction f1{};
  f1.setNumerator(10);
  f1.setDenominator(2);

  Fraction f2{};
  f2.setNumerator(9);
  f2.setDenominator(3);

  std::cout << "Product of f1 and f2: ";
  printFraction(f1.multiply(f2));

  return 0;
}
