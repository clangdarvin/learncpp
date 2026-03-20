#include <iostream>
#define MY_NAME "Christian"
#define PRINT_CHRISTIAN

int main() {
  std::cout << "My name is: " << MY_NAME << std::endl;

#ifdef PRINT_CHRISTIAN
  std::cout << "Christian" << std::endl;
#endif

#ifdef PRINT_LINUS
  std::cout << "Linus" << std::endl;
#endif
  return 0;
}
