#include <iostream>
#include <utility>
namespace {
void sort2(int& x, int& y) {
  if (x > y) {
    // int temp{y};
    // y = x;
    // x = temp;

    // or I can use swap
    std::swap(x, y);
  }
}

void displayNumbers(int& x, int& y) {
  std::cout << x << ' ' << y << ' ' << '\n';
}
}  // namespace

auto main() -> int {
  int x{7};
  int y{5};
  displayNumbers(x, y);
  sort2(x, y);
  displayNumbers(x, y);

  sort2(x, y);
  displayNumbers(x, y);
  return 0;
}
