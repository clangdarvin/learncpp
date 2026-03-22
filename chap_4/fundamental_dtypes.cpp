#include <iostream>
int main() {
  double const my_gpa{3.73};
  bool const cpp_programmer{true};
  int const cpp_version{20};

  std::cout << "GPA: " << my_gpa << '\n';
  std::cout << "Is C++ Programmer: " << cpp_programmer << '\n';
  std::cout << "C++ Version: " << cpp_version << '\n';
  return 0;
}
