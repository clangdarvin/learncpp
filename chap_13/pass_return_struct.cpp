#include <iostream>
#include <string_view>
struct Employee {
  int id{};
  int age{};
  double wage{};
};

struct Point3D {
  double x{0.0};
  double y{0.0};
  double z{0.0};
};

struct AdRevenue {
  int ads_watched{};
  double ads_clicked{};
  double average_earning{};
};

struct Fraction {
  int numerator{};
  int denominator{};
};

Fraction getFraction() {
  Fraction fraction{};
  std::cout << "Enter numerator: ";
  std::cin >> fraction.numerator;
  std::cout << "Enter denominator: ";
  std::cin >> fraction.denominator;
  std::cout << '\n';
  return fraction;
}

Fraction multiplyFractions(const Fraction& frac_a, const Fraction& frac_b) {
  return {.numerator = frac_a.numerator * frac_b.numerator,
          .denominator = frac_a.denominator * frac_b.denominator};
}

void displayEarning(const AdRevenue& ad_rev) {
  std::cout << "Number of ads watched: " << ad_rev.ads_watched << '\n';
  std::cout << "Percentage of users who clicked an ad: " << ad_rev.ads_clicked
            << '\n';
  std::cout << "Average Earning: " << ad_rev.average_earning << '\n';
  std::cout << "Total: "
            << (ad_rev.ads_watched * ad_rev.ads_clicked / 100 *
                ad_rev.average_earning)
            << '\n';
}

Point3D getZeroPoint() { return {0.0, 0.0, 0.0}; }

void printEmployee(const Employee& e) {
  std::cout << "ID: " << e.id << '\n';
  std::cout << "Age: " << e.age << '\n';
  std::cout << "Wage: " << e.wage << '\n';
}

auto main() -> int {
  Employee e1{10, 35, 85.40};
  printEmployee(e1);
  std::cout << '\n';
  printEmployee({15, 40, 95.30});

  Point3D zero{getZeroPoint()};
  if (zero.x == 0.0 && zero.y == 0 && zero.z == 0) {
    std::cout << "Point is zero" << '\n';
  } else {
    std::cout << "Point is not zero" << '\n';
  }

  std::cout << '\n';

  AdRevenue ad_rev{15, 5, 50};
  displayEarning(ad_rev);

  Fraction frac_a{getFraction()};
  Fraction frac_b{getFraction()};

  Fraction product = multiplyFractions(frac_a, frac_b);
  std::cout << "Your fractions multiplied together: " << product.numerator
            << "/" << product.denominator << '\n';
  return 0;
}
