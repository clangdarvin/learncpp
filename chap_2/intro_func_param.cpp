#include <iostream>

int get_value_from_user() {
  std::cout << "Enter an integer: ";
  int number{};
  std::cin >> number;

  return number;
}

void display_output(int number) {
  std::cout << number << " * 2: " << (number * 2) << std::endl;
}

// Write a function called doubleNumber() that takes one integer parameter. The
//  function should return double the value of the parameter.
int displayDoubleNumber(int x) { return x * 2; }

// Write a complete program that reads an integer from the user, doubles it
// using the doubleNumber() function you wrote in the previous quiz question,
// and then prints the doubled value out to the console.

int main() {
  display_output(get_value_from_user());
  int x{get_value_from_user()};
  std::cout << x << ": " << displayDoubleNumber(x) << std::endl;
  return 0;
}
