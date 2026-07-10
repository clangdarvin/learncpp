#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

void displayVector(std::vector<int>& A) {
  std::cout << "Printing vector: ";
  for (int a : A) {
    std::cout << a << ", ";
  }
  std::cout << '\n';
}

void quiz() {
  std::vector square_numbers{1, 4, 9, 16, 25};
  std::vector<int> v1{5};  // the vector contains an element of 5
  std::vector<int> v2(5);  // the vector has a size of 5 elements
  std::vector<double> temperature(365);
  std::cout << "Enter 3 integers: ";
  std::vector<int> numbers(3);
  std::cin >> numbers[0] >> numbers[1] >> numbers[2];
  int total{std::accumulate(numbers.begin(), numbers.end(), 0)};
  int product{std::accumulate(numbers.begin(), numbers.end(), 1,
                              std::multiplies<int>())};

  std::cout << "Sum: " << total << '\n';
  std::cout << "Product: " << product << '\n';
}

auto main() -> int {
  std::vector<int> prime_numbers{2, 3, 5, 7, 11, 13};
  std::vector vowels{'a', 'e', 'i', 'o', 'u'};

  std::cout << "Prime[0]: " << prime_numbers[0] << '\n';
  int total = std::accumulate(prime_numbers.begin(), prime_numbers.end(), 0);
  std::cout << "Sum of all first 5 prime numbers: " << total << '\n';

  std::vector<int> data(10);
  displayVector(data);

  quiz();

  return 0;
}
