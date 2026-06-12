#include <iostream>
#include <string>
#include <string_view>
class Employee {
 private:
  std::string m_name;

 public:
  void setName(std::string_view name) { m_name = name; };
  const std::string& getName() const { return m_name; }
};

Employee createEmployee(std::string_view name) {
  Employee e;
  e.setName(name);
  return e;
}

class Foo {
 private:
  int m_value{30};

 public:
  const int& value() const { return m_value; }
};

auto main() -> int {
  Employee e1{};
  e1.setName("Elijah");
  std::cout << e1.getName() << '\n';

  std::cout << createEmployee("Tyler").getName() << '\n';

  Foo f{};
  // f.value() = 10; Cannot modify because the value returns a const reference
  std::cout << f.value() << '\n';
  return 0;
}

// Best Practice: use return by const reference
