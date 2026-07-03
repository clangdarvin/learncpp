#include <chrono>
#include <iostream>
#include <random>

class Something {
 public:
  static int getValue() { return ++s_value; }

 private:
  static inline int s_value{};
};

struct Chars {
  char fst{};
  char sec{};
  char trd{};
  char frt{};
  char fth{};
};

struct MyClass {
  static inline Chars s_my_chars{'a', 'e', 'i', 'o', 'u'};
};

class Random {
  static inline std::mt19937 generate() {
    std::random_device rd{};

    std::seed_seq ss{
        static_cast<std::seed_seq::result_type>(
            std::chrono::steady_clock::now().time_since_epoch().count()),
        rd(),
        rd(),
        rd(),
        rd(),
        rd(),
        rd(),
        rd()};

    return std::mt19937{ss};
  }
};
auto main() -> int {
  for (int i{0}; i < 3; ++i) {
    std::cout << Something::getValue() << '\n';
  }

  std::cout << MyClass::s_my_chars.sec << '\n';
  return 0;
}
