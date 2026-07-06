#include <iostream>
namespace {

template <typename T>
struct Pair {
  T x{};
  T y{};
};

template <typename T>
void print(const Pair<T>& p) {
  std::cout << "[" << p.x << ", " << p.y << "]" << '\n';
}

// Create alias template
template <typename T>
using Coord = Pair<T>;

template <typename T>
void printCoord(const Coord<T>& c) {
  std::cout << "Coordinates: (" << c.x << ", " << c.y << ")" << '\n';
}

}  // namespace

auto main() -> int {
  using Point = Pair<int>;
  Point p{.x = 2, .y = 4};
  print(p);

  // Alias template usage
  Coord coordinates{.x = 12.8797, .y = 121.7740};
  printCoord(coordinates);
  return 0;
}
