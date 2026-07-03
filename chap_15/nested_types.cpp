#include <iostream>
#include <string>
#include <string_view>

class Fruit {
 public:
  enum Type { apple, banana, cherry };

  explicit Fruit(Type type) : m_type(type) {}

  [[nodiscard]] Type getType() const { return m_type; }
  [[nodiscard]] int getPercentageEaten() const { return m_percentage_eaten; }
  [[nodiscard]] bool isCherry() const { return m_type == Type::cherry; }

 private:
  Type m_type{};
  int m_percentage_eaten{0};
};

class Employee {
 public:
  using IDType = int;
  Employee(std::string_view name, IDType id, double wage)
      : m_name(name), m_id(id), m_wage(wage) {}
  [[nodiscard]] const std::string& getName() const { return m_name; }
  [[nodiscard]] IDType getID() const { return m_id; }
  double getWage() const { return m_wage; }

 private:
  std::string m_name;
  IDType m_id{};
  double m_wage{};
};

// Nested classes are faily uncommon
class EmployeeB {
 public:
  using IDType = int;
  EmployeeB(std::string_view name, IDType id, double wage)
      : m_name(name), m_id(id), m_wage(wage) {}
  class Printer {
   public:
    static void print(const EmployeeB& e) {
      std::cout << e.m_name << ", " << e.m_id << '\n';
    }
  };

 private:
  std::string m_name;
  IDType m_id{};
  double m_wage{};
};

class outer;
class outer {
 public:
  class inner {};
};

auto main() -> int {
  Fruit apple{Fruit::apple};
  if (apple.getType() == Fruit::apple) {
    std::cout << "An apple a day keeps the doctor away." << '\n';
  } else {
    std::cout << "Then what fruit are you?" << '\n';
  }

  Employee e1{"Steve", 1, 100000};
  Employee::IDType id{e1.getID()};
  std::cout << e1.getName() << ", " << id << ", " << e1.getWage() << '\n';

  const EmployeeB eb1{"Lebron", 2, 150000};
  const EmployeeB::Printer p{};
  p.print(eb1);
  return 0;
}
