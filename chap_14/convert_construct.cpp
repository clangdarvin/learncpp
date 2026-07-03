#include <iostream>
#include <string>
#include <string_view>
class Foo {
 public:
  explicit Foo(int x) : m_x(x) {}
  int x() const { return m_x; }

 private:
  int m_x{};
};

class Employee {
 public:
  explicit Employee(std::string_view name) : m_name(name) {}
  const std::string& name() const { return m_name; }

 private:
  std::string m_name;
};

class Dollars {
 public:
  explicit Dollars(int d) : m_dollars(d) {}
  int dollars() const { return m_dollars; }

 private:
  int m_dollars{};
};

void printFoo(Foo f) { std::cout << f.x() << '\n'; }
void printEmployee(Employee e) { std::cout << e.name() << '\n'; }
void printDollars(Dollars d) { std::cout << "$" << d.dollars() << '\n'; }
auto main() -> int {
  Foo f{5};
  printFoo(f);
  Employee e1{"Officer K"};
  printEmployee(e1);
  printDollars(Dollars{50});
  return 0;
}
