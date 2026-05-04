#include <cmath>
#include <ios>
#include <iostream>
#include <limits>
#include <numbers>
#include <string>
namespace {
void print(int x) { std::cout << x << '\n'; }

void print(const std::string& s) { std::cout << s << '\n'; }

void displayInParameters() {
  // Either passed by value or by const reference
  print(4);
  std::string s{"C++ Programming"};
  print(s);
}

void getSinCos(double degrees, double& sin, double& cos) {
  constexpr double pi{std::numbers::pi};
  double radians = degrees * pi / 180.0;
  sin = std::sin(radians);
  cos = std::cos(radians);
}

void displayOutParameters() {
  double sin{0};
  double cos{0};
  double degrees{};

  while (true) {
    std::cout << "Enter the number of degrees: ";
    std::cin >> degrees;

    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
      getSinCos(degrees, sin, cos);
      std::cout << "Sin: " << sin << '\n';
      std::cout << "Cos: " << cos << '\n';
      break;
    }
  }
}

int getByValue() { return 5; }

void getByReference(int& x) { x = 15; }
void displayOutParameterExample() {
  // int x{getByValue()};
  std::cout << getByValue() << '\n';

  int y{};
  getByReference(y);
  std::cout << y << '\n';
}
}  // namespace

// namespace
auto main() -> int {
  // displayInParameters();
  // displayOutParameters();
  displayOutParameterExample();
  return 0;
}

// Best practice: avoid out-parameters
