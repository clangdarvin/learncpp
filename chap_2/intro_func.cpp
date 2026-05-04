#include <iostream>
void print_name() { std::cout << "My name is Christian.\n"; }

int get_value_from_user() {
  std::cout << "Enter an integer: ";
  int number{};
  std::cin >> number;

  return number;
}
int main() {
  print_name();
  int first_num{get_value_from_user()};
  int second_number{get_value_from_user()};
  std::cout << first_num << " + " << second_number << ": "
            << (first_num + second_number) << "\n";
  return 0;
}
