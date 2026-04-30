#include <cmath>
#include <iostream>
namespace {
template <auto N>
void print() {
  std::cout << N << '\n';
}

template <double D>
auto getSqrt() {
  static_assert(D >= 0.0, "Must be non-negative.");
  if constexpr (D >= 0) {
    return std::sqrt(D);
  }
  return 0.0;
}
}  // namespace

namespace Quiz {
template <int N>
constexpr auto factorial() {
  static_assert(N >= 0.0, "Must be non-negative.");
  if constexpr (N <= 1) {
    return 1;
  } else {
    return N * factorial<N - 1>();
  }
}

}  // namespace Quiz

auto main() -> int {
  // print<5>();
  // std::cout << getSqrt<5.0>() << '\n';
  // std::cout << getSqrt<-5.0>() << '\n';
  // print<'A'>();
  static_assert(Quiz::factorial<0>() == 1);
  static_assert(Quiz::factorial<3>() == 6);
  static_assert(Quiz::factorial<5>() == 120);

  Quiz::factorial<-3>();
  return 0;
}
