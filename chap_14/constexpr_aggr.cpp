#include <algorithm>
#include <iostream>

class Pair {
 public:
  constexpr Pair(int x, int y) : m_x{x}, m_y{y} {}

  [[nodiscard]]
  constexpr int max() const {
    return std::max(m_x, m_y);
  }

  constexpr void reset() {
    m_x = 0;
    m_y = 0;
  }

  [[nodiscard]]
  constexpr int x() const {
    return m_x;
  }

 private:
  int m_x{};
  int m_y{};
};

constexpr Pair zero() {
  Pair p{1, 2};
  p.reset();
  return p;
}

auto main() -> int {
  constexpr Pair p{10, 20};
  std::cout << p.max() << '\n';

  Pair p1{2, 4};
  p1.reset();
  std::cout << p1.x() << '\n';

  Pair p2{zero()};
  p2.reset();
  std::cout << p2.x() << '\n';
}

// constexpr const int& x() const {return m_x;}
