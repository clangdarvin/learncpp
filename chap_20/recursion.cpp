#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
void countDown(int n) {
  if (n < 1) {
    return;
  }
  std::cout << n << '\n';
  countDown(n - 1);
}

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return factorial(n - 1) * n;
}

int sumDigit(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return n;
}

auto main() -> int {
  countDown(5);

  std::cout << "fibonacci(8): " << fibonacci(8) << '\n';
  std::cout << "factorial(7): " << factorial(7) << '\n';
  // std::cout << sumDigit(357) << '\n';
  return 0;
}
