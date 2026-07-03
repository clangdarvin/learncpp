#include <iostream>
struct Employee {
  int id{};
  int age{};
  double wage{};
};

void printEmployee(const Employee& e) {
  std::cout << "ID: " << e.id << '\n';
  std::cout << "Age: " << e.age << '\n';
  std::cout << "Wage: $" << e.wage << '\n';
}

struct Point {
  double x{};
  double y{};
};

struct Triangle {
  Point a{};
  Point b{};
  Point c{};
};

auto main() -> int {
  Employee christian{1, 100, 70000.0};
  ++christian.age;
  christian.wage = 90000.50;

  printEmployee(christian);

  Employee* ptr{&christian};
  std::cout << "ID: " << ptr->id << '\n';

  Point a{5, 10};
  Point b{3, 6};
  Point c{7, 14};

  Triangle tr{.a = a, .b = b, .c = c};
  std::cout << tr.c.y << '\n';
  return 0;
}
