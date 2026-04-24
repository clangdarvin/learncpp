#include <iostream>
int main() {
  double d{static_cast<double>(static_cast<int>(3.5))};

  std::cout << "D: " << d << '\n';

  double d2{static_cast<double>(static_cast<float>(1.23456789))};
  std::cout << "D2: " << d2 << '\n';

  int i{10};
  float f = i;
  std::cout << f << '\n';

  double j{19.5};
  int k = j;
  std::cout << k << '\n';
  return 0;
}
