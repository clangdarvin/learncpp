#include <iostream>
int generateID() {
  static int s_id{0};
  return ++s_id;
}

class Something {
 public:
  Something() : m_id(++s_id_generator) {}
  int getID() const { return m_id; }

 private:
  static inline int s_id_generator{};
  int m_id{};
};

class Foo {
 public:
  Foo() = default;
  static auto getX() { return s_x; }
  static auto getPair() { return s_v; }

 private:
  static inline auto s_x{5};
  static inline std::pair s_v{1, 10.5};

  // auto m_x {5}; error
};

auto main() -> int {
  for (int i{0}; i < 3; ++i) {
    std::cout << "ID: " << generateID() << '\n';
  }

  Something s_a{};
  Something s_b{};
  Something s_c{};

  std::cout << "Something s_a: " << s_a.getID() << '\n';
  std::cout << "Something s_b: " << s_b.getID() << '\n';
  std::cout << "Something s_c: " << s_c.getID() << '\n';

  std::cout << Foo::getX() << '\n';

  return 0;
}

// Best Practice: access static members using ::
