#include <iostream>
#include <optional>
#include <string>
namespace {
std::optional<int> performDivision(int x, int y) {
  if (y == 0) {
    return {};
  }
  return x / y;
}

struct Employee {
  std::string name;
  int id;
};

void printEmployeeID() { std::cout << "ID Number is not known." << '\n'; }

void printEmployeeID(const Employee& e) {
  std::cout << "Name: " << e.name << '\n';
  std::cout << "ID: " << e.id << '\n';
}
}  // namespace

auto main() -> int {
  std::optional<int> result_a{performDivision(10, 5)};
  if (!result_a) {
    std::cout << "Result A: Failed!" << '\n';
  } else {
    std::cout << "Result A: " << *result_a << '\n';
  }

  std::optional<int> result_b{performDivision(10, 0)};
  if (!result_b) {
    std::cout << "Result B: Failed!" << '\n';
  } else {
    std::cout << "Result B: " << *result_b << '\n';
  }

  printEmployeeID();

  Employee e{"Lebron", 315};
  printEmployeeID(e);
  return 0;
}

// Best Practice: function overloading when possible. otherwise,
// std::optional<T> when T would be passed by value. const T* when T is
// expensive to copy.
