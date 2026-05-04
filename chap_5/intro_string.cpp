#include <cstddef>
#include <iostream>
#include <string>
int main() {
  std::cout << "Enter your full name: ";
  std::string developer_name{};
  std::getline(std::cin >> std::ws, developer_name);

  std::cout << "Enter your favorite color: ";
  std::string color{};
  std::cin >> color;

  std::cout << "Enter your age: ";
  size_t age{};
  std::cin >> age;

  std::cout << "Your age + length of name is: "
            << (age + developer_name.length());
  std::cout << "\nYour name is " << developer_name
            << " and your favorite color is " << color << '\n';

  std::cout << "The word " << color << " has " << color.length()
            << " characters" << '\n';

  return 0;
}
