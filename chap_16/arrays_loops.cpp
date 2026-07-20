#include <cstddef>
#include <iostream>
#include <typeinfo>
#include <vector>
template <typename T>
T calculateAverage(const std::vector<T>& A) {
  std::size_t n{A.size()};
  T average{0};

  for (std::size_t i{0}; i < n; ++i) {
    average += A[i];
  }
  average /= static_cast<int>(n);
  return average;
}

template <typename T>
void printVectorLoop(const std::vector<T>& A) {
  for (std::size_t i{0}; i < A.size(); ++i) {
    std::cout << A[i] << ' ';
  }
  std::cout << '\n';
}

void askUser() {
  bool flag{true};
  while (flag) {
    std::cout << "Enter a number between 1 and 9: ";
    int x{};
    std::cin >> x;
  }
}

auto main() -> int {
  std::vector<int> dlsud_gpa{94, 95, 96, 97, 98, 93};
  std::vector<double> uow_gpa{98, 97, 98, 97, 96, 99};

  std::cout << "Average DLSU-D GPA: " << calculateAverage(dlsud_gpa) << '\n';
  std::cout << "Average UoW GPA: " << calculateAverage(uow_gpa) << '\n';

  std::vector<int> A{4, 6, 7, 3, 8, 2, 1, 9};
  printVectorLoop(A);
  return 0;
}
