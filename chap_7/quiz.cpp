#include <iostream>

#include "qconstants.h"

namespace {
void displayQuestion1() {
  std::cout << "Enter a positive number: ";
  int num{};
  std::cin >> num;

  if (num < 0) {
    std::cout << "Negative number entered. Making positive..." << '\n';
    num = -num;
  }
  std::cout << "You entered: " << num << '\n';
}

void displayQuestion2() {
  std::cout << "How many students are there in your class? ";
  int students{};
  std::cin >> students;

  if (students > Constants::max_class_size) {
    std::cout << "There are too many students in this class" << '\n';
  } else {
    std::cout << "This class isn't too large" << '\n';
  }
}

int accumulate(int x) {
  static int s_sum{};
  s_sum += x;
  return s_sum;
}

void displayQuestion3() {
  // no way off reset the accumulation without restarting the program
  std::cout << accumulate(4) << '\n';
  std::cout << accumulate(3) << '\n';
  std::cout << accumulate(2) << '\n';
  std::cout << accumulate(1) << '\n';
}
}  // namespace

int main() {
  displayQuestion1();
  //  displayQuestion2();
  displayQuestion3();
  return 0;
}
