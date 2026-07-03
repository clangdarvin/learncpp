#include <iostream>
#include <utility>

template <typename T>
struct Pair {
  T x{};
  T y{};
};

template <typename T>
struct Foo {
  T x{};
  int y{};
};

template <typename T, typename U>
struct PairB {
  T x{};
  U y{};
};

template <typename T, typename U>
void print(PairB<T, U> p) {
  std::cout << "[" << p.x << ", " << p.y << "]" << '\n';
}

template <typename T>
constexpr T max(Pair<T> p) {
  return (p.x > p.y) ? p.x : p.y;
}

template <typename T, typename U>
void printPair(std::pair<T, U> p) {
  std::cout << "[" << p.first << ", " << p.second << "]" << '\n';
}

auto main() -> int {
  Pair<int> p1{5, 10};
  Pair<double> p2{3.14, 9.18};

  std::cout << "T is int: " << p1.x << ", " << p1.y << '\n';
  std::cout << "T is double: " << p2.x << ", " << p2.y << '\n';

  std::cout << max(p1) << '\n';
  std::cout << max(p2) << '\n';

  PairB<int, double> pb_1{1, 10.5};

  print(pb_1);

  std::pair<int, int> stp1{4, 8};
  std::pair<double, int> stp2{3.14, 9};

  printPair(stp2);

  return 0;
}
