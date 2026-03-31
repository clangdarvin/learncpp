#include <iostream>
#include <numeric>
#include <vector>
int main() {
  double const my_gpa{3.73};
  bool const cpp_programmer{true};
  int const cpp_version{20};
  std::string const fave_programming_language{"C++"};

  std::cout << "GPA: " << my_gpa << '\n';
  std::cout << "Is C++ Programmer: " << cpp_programmer << '\n';
  std::cout << "C++ Version: " << cpp_version << '\n';
  std::cout << "Favorite Programming Language: " << fave_programming_language
            << '\n';

  std::vector<double> const grades{3.527777, 3.750000, 3.782608, 3.858695,
                                   3.690476, 3.726190, 3.816666, 3.81};

  double sum{std::reduce(grades.begin(), grades.end())};
  std::cout << "GPA: " << (sum / grades.size()) << '\n';
  return 0;
}
