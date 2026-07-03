#include <ios>
#include <iostream>
namespace {
template <typename T>
struct Pair {
  T first{};
  T second{};
};

template <typename U>
class PairC {
 public:
  PairC(const U& first, const U& second) : m_first{first}, m_second{second} {}
  bool isEqual(const PairC<U>& pair);

 private:
  U m_first{};
  U m_second{};
};

template <typename U>
bool PairC<U>::isEqual(const PairC<U>& pair) {
  return m_first == pair.m_first && m_second == pair.m_second;
}

template <typename T, typename U, typename V>
class Triad {
 public:
  Triad(const T& item_a, const U& item_b, const V& item_c)
      : m_item_a{item_a}, m_item_b{item_b}, m_item_c{item_c} {}
  const T& item_a() const { return m_item_a; }
  const U& item_b() const { return m_item_b; }
  const V& item_c() const { return m_item_c; }
  void print() const;

 private:
  T m_item_a{};
  U m_item_b{};
  V m_item_c{};
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const {
  std::cout << "[" << item_a() << ", " << item_b() << ", " << item_c() << "]"
            << '\n';
}

}  // namespace
auto main() -> int {
  Pair<int> p1{10, 20};
  std::cout << p1.first << ", " << p1.second << '\n';

  Pair<double> p2{3.14, 9.18};
  std::cout << p2.first << ", " << p2.second << '\n';

  PairC<int> pc1{50, 50};
  std::cout << std::boolalpha << pc1.isEqual(PairC{50, 50}) << '\n';

  Triad<int, int, int> t1{5, 10, 15};
  t1.print();
  std::cout << t1.item_a() << '\n';

  using namespace std::literals::string_literals;
  const Triad t2{1, 3.14, "Hello, World!"s};
  t2.print();
  std::cout << '\n';
  return 0;
}
