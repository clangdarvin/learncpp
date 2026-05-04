#include "io.h"

#include <iostream>

int readNumber() {
  std::cout << "Enter a number: ";
  int user_number{};
  std::cin >> user_number;
  return user_number;
}

void writeAnswer(int result) { std::cout << "Sum: " << result << std::endl; }
