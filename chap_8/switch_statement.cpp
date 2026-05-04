#include <iostream>
namespace {
int calculate(int x, int y, char arithmetic_operator) {
  switch (arithmetic_operator) {
    case '+':
      return x + y;
    case '-':
      return x - y;
    case '*':
      return x * y;
    case '/':
      return x / y;
    default:
      std::cout << "Invalid operator." << '\n';
      return 0;
  }
}

int getNumberInput() {
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;

  return x;
}
char getArithmeticOperator() {
  std::cout << "Enter an arithmetic operator [+, -, *, /]: ";
  char arithmetic_operator{};
  std::cin >> arithmetic_operator;

  return arithmetic_operator;
}

void displayResult(int x, int y, int result, char arithmetic_operator) {
  std::cout << "\t" << " " << x << '\n';
  std::cout << "\t" << arithmetic_operator << " " << y << '\n';
  std::cout << "\t" << "-----\n\t " << result << '\n';
}
}  // namespace

int main() {
  int x{getNumberInput()};
  int y{getNumberInput()};
  char arithmetic_operator{getArithmeticOperator()};

  int result{calculate(x, y, arithmetic_operator)};
  displayResult(x, y, result, arithmetic_operator);
  return 0;
}
