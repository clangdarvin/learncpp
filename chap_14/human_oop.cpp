#include <iostream>

#include "human.h"

void introduce(const Human& human) {
  std::cout << "Hello, I'm " << human.getName() << "! My age is "
            << human.getAge() << " years old." << '\n';
}
auto main() -> int {
  Human h1{"Christian", 30, 'M', false};
  introduce(h1);
  return 0;
}
