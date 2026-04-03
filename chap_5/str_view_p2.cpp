#include <iostream>
#include <string_view>

void printName(std::string_view name) { std::cout << "Name: " << name << '\n'; }
int main() {
  std::string_view fruit{"Apple"};
  std::cout << fruit << '\n';
  fruit.remove_prefix(2);
  std::cout << fruit << '\n';

  fruit.remove_suffix(1);
  std::cout << fruit << '\n';

  fruit = "Mango";
  std::cout << fruit << '\n';
  return 0;
}
