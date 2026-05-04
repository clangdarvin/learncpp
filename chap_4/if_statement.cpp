#include <iostream>

bool isPrime(int n) { return n == 2 || n == 3 || n == 5 || n == 7; }

int main() {
  std::cout << "Enter a number (0-9): ";
  int n{};
  std::cin >> n;

  if (isPrime(n)) {
    std::cout << n << " is a prime number." << '\n';
  } else {
    std::cout << n << " is not a prime number." << '\n';
  }

  return 0;
}
