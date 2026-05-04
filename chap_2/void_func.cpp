#include <iostream>
#include <string>
void print_hello(std::string user_name) {
  std::cout << "Hello, " << user_name << "!" << std::endl;
}

int main() {
  for (int i = 0; i < 1000000; i++) {
    print_hello("Elijah");
  }
  return 0;
}
