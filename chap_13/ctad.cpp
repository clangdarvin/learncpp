#include <iostream>
#include <utility>

namespace {
template <typename T, typename U>
struct Pair {
  T x{};
  U y{};
};

template <typename T, typename U>
void print(std::pair<T, U> p) {
  std::cout << "[" << p.first << ", " << p.second << "]" << '\n';
}

}  // namespace

auto main() -> int {
  std::pair p1{5, 10};
  std::cout << p1.first << ", " << p1.second << '\n';

  std::pair<double, double> p2{5.5, 10.5};
  std::cout << p2.first << ", " << p2.second << '\n';

  Pair<int, int> p3{.x = 20, .y = 40};
  Pair p4{3.14, 9.18};

  std::cout << p3.x << ", " << p3.y << '\n';
  std::cout << p4.x << ", " << p4.y << '\n';

  std::pair p{23, 30};
  print(p);
  return 0;
}
