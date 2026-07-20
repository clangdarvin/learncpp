#include <iostream>
#include <vector>
template <typename T>
void displayPrimeNumbers(std::vector<T>& A) {
  std::cout << "Printing the 1st PRIME number: ";
  std::cout << A[0] << '\n';
}

// Quiz
template <typename T>
void printElement(const std::vector<T>& A, int index) {
  if (index < 0 || index >= static_cast<int>(A.size())) {
    std::cout << "Invalid index.\n";
    return;
  }
  std::cout << "The element has a value: " << A[index] << '\n';
}

auto main() -> int {
  std::vector<int> odd_numbers{1, 3, 5, 7, 9, 11, 13, 15};
  displayPrimeNumbers(odd_numbers);

  std::vector<int> v1{0, 1, 2, 3, 4};
  printElement(v1, 2);
  printElement(v1, 5);

  std::vector<double> v2{1.1, 2.2, 3.3};
  printElement(v2, 0);
  printElement(v2, -1);
  return 0;
}
