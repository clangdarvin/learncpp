#include <ios>
#include <iostream>
struct IntPair {
 public:
  int x{};
  int y{};
  void print() const { std::cout << "Pair(" << x << "," << y << ")" << '\n'; }
  auto isEqual(IntPair pair) const -> bool {
    return (x == pair.x) && (y == pair.y);
  }
};

auto main() -> int {
  IntPair p1{1, 2};
  IntPair p2{3, 4};
  std::cout << "p1: ";
  p1.print();

  std::cout << "p2: ";
  p2.print();

  std::cout << "is " << "p1 and p1 equal? " << std::boolalpha
            << (p1.isEqual(p1)) << '\n';
  std::cout << "is " << "p1 and p2 equal? " << std::boolalpha
            << (p1.isEqual(p2)) << '\n';
  return 0;
}
