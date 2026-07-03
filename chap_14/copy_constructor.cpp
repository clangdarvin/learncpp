#include <iostream>
#include <stdexcept>
class Fraction {
 public:
  Fraction(int numerator = 0, int denominator = 1)
      : m_numerator(numerator), m_denominator(denominator) {}

  Fraction(const Fraction& frac)
      : m_numerator(frac.m_numerator), m_denominator(frac.m_denominator) {
    std::cout << "Copy constructor" << '\n';
  }

  int numerator() const { return m_numerator; }
  int denominator() const { return m_denominator; }

  int divide() const {
    if (m_denominator == 0) {
      throw std::invalid_argument("Denominator must not be zero.");
    }
    return m_numerator / m_denominator;
  }

 private:
  int m_numerator{0};
  int m_denominator{1};
};

void print(const Fraction& frac) {
  std::cout << frac.numerator() << "/" << frac.denominator() << ": "
            << frac.divide() << '\n';
}

auto main() -> int {
  Fraction frac{10, 0};
  try {
    print(frac);
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error: " << e.what() << '\n';
  }
  Fraction frac_b{10, 5};
  // print(frac_b);

  Fraction f_copy{frac_b};
  print(f_copy);
  return 0;
}

// Best Practice: Prefer implicit copy
