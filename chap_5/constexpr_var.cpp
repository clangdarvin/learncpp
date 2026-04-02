#include <iostream>
constexpr int factorial(int n) { return n <= 1 ? 1 : (n * factorial(n - 1)); }

int max(int x, int y) { return x > y ? x : y; }

constexpr int cmax(int x, int y) { return x > y ? x : y; }

int main() {
  constexpr double earth_gravity{9.81};
  constexpr int sum{20 + 30};
  std::cout << "Gravity of Earth: " << earth_gravity << '\n';
  std::cout << "Sum: " << sum << '\n';
  constexpr int val = factorial(5);
  std::cout << "factorial(5): " << val << '\n';
  std::cout << '\n';

  int m1{max(5, 6)};
  const int m2{max(5, 6)};
  //  constexpr int m3{max(5, 6)};

  int m4{cmax(5, 6)};            // either compile-time or runtime
  const int m5{cmax(5, 6)};      // either compile-time or runtime
  constexpr int m6{cmax(5, 6)};  // compile-time

  return 0;
}

/*
 * known at compile-time: constexpr
 * known at runtime: const
 */
