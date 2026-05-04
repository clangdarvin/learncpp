#include <iostream>
int main() {
  int first_num{}, second_number{};
  std::cout << "Enter an integer: ";
  std::cin >> first_num;

  std::cout << "Enter another integer: ";
  std::cin >> second_number;

  std::cout << first_num << " + " << second_number << " is "
            << first_num + second_number << ".\n";

  std::cout << first_num << " - " << second_number << " is "
            << first_num - second_number << ".\n";
  return 0;
}
