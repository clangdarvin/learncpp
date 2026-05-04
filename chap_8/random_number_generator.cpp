#include <iostream>
namespace {

unsigned int g_state{0};
int incrementByOne() {
  static int s_state{3};
  ++s_state;
  return s_state;
}

unsigned int LCG16() {
  g_state = 8253729 * g_state + 2396403;
  return g_state % 32768;
}

void seedPRNG(unsigned int seed) { g_state = seed; }
}  // namespace
int main() {
  // std::cout << incrementByOne() << '\n';
  // std::cout << incrementByOne() << '\n';
  // std::cout << incrementByOne() << '\n';
  seedPRNG(5);
  for (int i{1}; i <= 10; ++i) {
    std::cout << LCG16() << '\t';
    if (i % 5 == 0) {
      std::cout << '\n';
    }
  }
  return 0;
}

/*

*/
