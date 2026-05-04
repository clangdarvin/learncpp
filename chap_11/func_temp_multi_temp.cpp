#include <iostream>
namespace {

template <typename T, typename U>
auto getMax(T x, U y) {
  return (x > y) ? x : y;
}

template <typename T, typename U>
auto getMaxAuto(auto x, auto y) {
  return (x > y) ? x : y;
}

template <typename T>
auto add(T x, T y) {
  return x + y;
}

template <typename T, typename U>
auto add(T x, U y) {
  return x + y;
}

template <typename T, typename U, typename V>
auto add(T x, U y, V z) {
  return x + y + z;
}
}  // namespace

namespace Calculator {
template <typename T, typename U>
constexpr auto addNumbers(T x, U y) {
  return x + y;
}

template <typename T, typename U>
constexpr auto subtractNumbers(T x, U y) {
  return x - y;
}

template <typename T, typename U>
constexpr auto divideNumbers(T x, U y) {
  return x / y;
}

template <typename T, typename U>
constexpr auto multiplyNumbers(T x, U y) {
  return x * y;
}

}  // namespace Calculator

auto main() -> int {
  // std::cout << max(2, 5) << '\n';
  // std::cout << max<double>(2, 8.5) << '\n';
  // std::cout << getMax<>(12.9, 13.5) << '\n';
  // std::cout << getMaxAuto<int, double>(5, 9.5) << '\n';
  std::cout << add(15, 3) << '\n';
  std::cout << add(12.5, 10) << '\n';
  std::cout << add(12.5, 3, 16.5F) << '\n';
  std::cout << '\n';
  std::cout << "ADD" << '\n';
  std::cout << Calculator::addNumbers(15, 3) << '\n';
  std::cout << Calculator::addNumbers(15.5, 3.9) << '\n';
  std::cout << "SUBTRACT" << '\n';
  std::cout << Calculator::subtractNumbers(15, 5) << '\n';
  std::cout << Calculator::subtractNumbers(12.5, 2.1) << '\n';
  std::cout << "MULTIPLY" << '\n';
  std::cout << Calculator::multiplyNumbers(5, 3) << '\n';
  std::cout << Calculator::multiplyNumbers(12.2, 2) << '\n';
  return 0;
}
