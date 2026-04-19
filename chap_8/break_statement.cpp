#include <iostream>
namespace {

void performLoopBreak() {
  int sum{0};
  for (int count{1}; count <= 10; ++count) {
    std::cout << "Enter a number to add, or 0 to exit: ";
    int num{};
    std::cin >> num;

    if (num == 0) {
      break;
    }

    sum += num;
  }
  std::cout << "Sum: " << sum << '\n';
}

void performLoopSkipDivbyFour() {
  for (int i{1}; i <= 10; ++i) {
    if (i % 4 == 0) {
      continue;
    }
    std::cout << i << '\n';
  }
}
}  // namespace
int main() {
  // performLoopBreak();
  performLoopSkipDivbyFour();
  return 0;
}
