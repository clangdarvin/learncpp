#include <iostream>
#include <ostream>
struct Employee {
  int id{};
  int age{};
  double wage{};
};

// std::ostream& operator<<(std::ostream& out, const Employee& e) {
//   out << "ID: " << e.id << ", " << "Age: " << e.age << ", "
//       << "Wage: " << e.wage;
//   return out;
// }
//
auto main() -> int {
  Employee christian{.id = 10, .age = 30, .wage = 500000.0};
  christian = {.id = christian.id, .age = 31, .wage = 650000.0};
  std::cout << christian.wage << '\n';
  return 0;
}
