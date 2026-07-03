#include <iostream>
#include <string_view>
struct Employee {
  int id{};
  int age{};
  double wage{};
};

static void displayEmployeeInfo(Employee& emp, std::string_view emp_name) {
  std::cout << "Name: " << emp_name << '\n';
  std::cout << "Age: " << emp.age << '\n';
  std::cout << "ID: " << emp.id << '\n';
  std::cout << "Wage: $" << emp.wage << '\n';
  std::cout << '\n';
}

static void whoEarnsMore(Employee& emp_a, Employee& emp_b) {
  if (emp_a.wage > emp_b.wage) {
    std::cout << "ID-" << emp_a.id << " earns more than ID-" << emp_b.id
              << '\n';
  } else {
    std::cout << "ID-" << emp_b.id << " earns more than ID-" << emp_a.id
              << '\n';
  }
}

auto main() -> int {
  Employee lebron{};
  Employee kevin{};

  // LEBRON
  lebron.age = 41;
  lebron.id = 23;
  lebron.wage = 52.6;

  kevin.age = 37;
  kevin.id = 35;
  kevin.wage = 43.90;

  displayEmployeeInfo(lebron, "Lebron James");
  displayEmployeeInfo(kevin, "Kevin Durant");

  whoEarnsMore(lebron, kevin);
  return 0;
}
