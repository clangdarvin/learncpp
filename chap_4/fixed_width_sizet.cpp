#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>
int main() {
  int x{32767};
  x += 1;
  std::cout << "X: " << x << '\n';

  std::int16_t sample_age{20};
  std::cout << "Age: " << sample_age << '\n';

  std::cout << "The size of int: " << sizeof(int) << '\n';

  return 0;
}

// std::int - if you need a guaranteed range
// std::uint - bit manipulation or wrap-around behavior
