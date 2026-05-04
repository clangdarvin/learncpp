#include <chrono>
#include <iostream>
#include <random>
namespace {
void performMersenneTwister() {
  std::mt19937 mt{};
  for (int i{1}; i <= 10; ++i) {
    std::cout << mt << '\t';
    if (i % 5 == 0) {
      std::cout << '\n';
    }
  }
}

void rollSixSidedDie() {
  // There's no seeding that's why when the function is called for n times, it
  // will yield to the same outputs
  int die_sides{6};
  std::mt19937 mt{};

  std::uniform_int_distribution die_6{1, die_sides};
  for (int i{1}; i <= 10; ++i) {
    std::cout << die_6(mt) << ',';
    if (i % 5 == 0) {
      std::cout << '\n';
    }
  }
}

void rollDiewSeed() {
  int die_sides{6};
  std::mt19937 mt{static_cast<std::mt19937::result_type>(
      std::chrono::steady_clock::now().time_since_epoch().count())};

  std::uniform_int_distribution die_6{1, die_sides};
  for (int i{1}; i <= 10; ++i) {
    std::cout << die_6(mt) << ',';
    if (i % 5 == 0) {
      std::cout << '\n';
    }
  }
}

void rollDiewRandomDevice() {
  int die_sides{6};
  std::mt19937 mt{std::random_device{}()};
  std::uniform_int_distribution die_6{1, die_sides};

  for (int i{1}; i <= 10; ++i) {
    std::cout << die_6(mt) << ',';
    if (i % 5 == 0) {
      std::cout << '\n';
    }
  }
}

int getCard() {
  static std::mt19937 mt{std::random_device{}()};
  std::uniform_int_distribution card{1, 52};
  return card(mt);
}

void performSeedSeq() {
  std::random_device rd{};
  std::seed_seq ss{rd(), rd(), rd(), rd(), rd()};
  std::mt19937 mt{ss};
  std::uniform_int_distribution die_6{1, 6};
  for (int i{1}; i <= 5; ++i) {
    std::cout << die_6(mt) << '\n';
  }
}
}  // namespace
int main() {
  // performMersenneTwister();
  // rollSixSidedDie();
  // rollDiewSeed();
  // rollDiewRandomDevice();
  // std::cout << getCard() << '\n';
  performSeedSeq();
  return 0;
}
