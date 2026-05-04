#include <ios>
#include <iostream>
#include <limits>

namespace {

void ignoreLine() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
double getDouble() {
  while (true) {
    std::cout << "Enter a decimal number: ";
    double x{};
    std::cin >> x;
    bool success{std::cin};
    std::cin.clear();
    ignoreLine();
    if (success) {
      return x;
    }
  }
}

char getOperator() {
  while (true) {
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;

    switch (op) {
      case '+':
      case '-':
      case '*':
      case '/':
        return op;
      default:
        std::cout << "Invalid Input. Please try again." << '\n';
    }
  }
}

void printResult(double x, char operation, double y) {
  std::cout << x << ' ' << operation << ' ' << y << " is ";

  switch (operation) {
    case '+':
      std::cout << x + y << '\n';
      return;
    case '-':
      std::cout << x - y << '\n';
      return;
    case '*':
      std::cout << x * y << '\n';
      return;
    case '/':
      std::cout << x / y << '\n';
      return;
  }
}

}  // namespace

int main() {
  double x{getDouble()};
  char operation{getOperator()};
  double y{getDouble()};

  printResult(x, operation, y);

  return 0;
}
