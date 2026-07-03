#include <iostream>
#include <stdexcept>
#include <string>
#include <string_view>
class Employee {
 public:
  void setName(std::string_view name) {
    if (name.empty()) {
      throw std::invalid_argument("Employee name cannot be empty.");
    }
    m_name = name;
  }

  void print() const {
    std::cout << "Employee " << m_name << " has the first initial of "
              << getFirstInitial() << '\n';
  }

  char getFirstInitial() const { return m_name.front(); }

 private:
  std::string m_name;
};

class Yogurt {
 private:
  std::string m_flavor{"vanilla"};

 public:
  void setFlavor(std::string_view flavor) { m_flavor = flavor; }

  const std::string& getFlavor() const { return m_flavor; }
};

void print(const Yogurt& y) {
  std::cout << "The yogurt has a flavor of " << y.getFlavor() << '\n';
}
auto main() -> int {
  Employee e{};
  e.setName("Bjarne");
  e.print();

  e.setName("Alan");
  e.print();

  try {
    e.setName("");
  } catch (const std::invalid_argument& ex) {
    std::cerr << ex.what() << '\n';
  }

  Yogurt y{};
  y.setFlavor("Banana");
  print(y);
  return 0;
}

// Separation of interface and implementation
// Interface: public members
// Implementation: class logic and behaviors
//
