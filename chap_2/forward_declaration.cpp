#include <iostream>
int add(int x, int y);
int doMath(int first, int second, int third, int fourth);

int main() {
  std::cout << "sum of x and y: " << add(2, 3) << std::endl;
  return 0;
}

int add(int x, int y) { return x + y; }

int doMath(int first, int second, int third, int fourth) {
  return first + second * third / fourth;
}
