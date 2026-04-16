#include <cmath>
#include <iostream>
namespace {
void goTo1() {
  double x{};
tryAgain:
  std::cout << "Enter a non-negative number: ";
  std::cin >> x;

  if (x < 0.0) {
    goto tryAgain;
  }

  std::cout << "Square Root " << "(" << x << "): " << std::sqrt(x) << '\n';
}

void goTo2() {
  for (int i = 1; i < 5; ++i) {
    for (int j = 1; j < 5; ++j) {
      std::cout << i << " * " << j << ": " << (i * j) << '\n';
      if (i * j % 9 == 0) {
        std::cout << "Divisible by 9. Ending now..." << '\n';
        goto end;
      }
    }
    std::cout << "Incrementing the 1st factor" << '\n';
  }
end:
  std::cout << "Done." << '\n';
}
}  // namespace

int main() {
  // goTo1();
  goTo2();
  return 0;
}

// Avoid goto statements, unless the alternatives are worse
