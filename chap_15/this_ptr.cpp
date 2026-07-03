#include <iostream>
class Simple {
 public:
  explicit Simple(int id) : m_id(id) {}
  [[nodiscard]] int getID() const { return m_id; }
  void setID(int id) { m_id = id; }

  // void print() const { std::cout << this->m_id << '\n'; };

 private:
  int m_id{};
};

class Calculator {
 public:
  Calculator& add(int value) {
    m_value += value;
    return *this;
  }
  Calculator& sub(int value) {
    m_value -= value;
    return *this;
  }
  Calculator& mult(int value) {
    m_value *= value;
    return *this;
  }

  [[nodiscard]] int getValue() const { return m_value; }

  void reset() { *this = {}; }

 private:
  int m_value{0};
};

void print(const Simple& simple) { std::cout << simple.getID() << '\n'; }

auto main() -> int {
  Simple s{1};
  s.setID(10);
  print(s);

  Calculator calc{};
  calc.add(5).sub(3).mult(4);

  std::cout << calc.getValue() << '\n';

  calc.reset();
  std::cout << calc.getValue() << '\n';
  return 0;
}
