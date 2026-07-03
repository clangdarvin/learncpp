// With program-defined members
#include <iostream>

struct Company {
  struct Employee {
    int id{};
    int age{};
    double wage{};
  };
  int n_of_employees{};
  Employee CEO{};
};

auto main() -> int {
  Company abc_comp{15, {1, 25, 600000.0}};
  std::cout << abc_comp.CEO.wage << '\n';
  return 0;
}
