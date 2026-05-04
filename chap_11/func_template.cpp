#include <iostream>
namespace {
template <typename T>
T max(T x, T y) {
  std::cout << "from a template function" << '\n';
  return (x < y) ? y : x;
}

template <typename T>
int someFunc(T, double) {
  return 5;
}

int max(int x, int y) {
  std::cout << "from a non-template function" << '\n';
  return (x < y) ? y : x;
}

template <typename T>
T incrementByX(T x) {
  return x + 1;
}

template <typename T>
void printIDValue(T value) {
  static int id{0};
  std::cout << ++id << ") " << value << '\n';
}
}  // namespace

int main() {
  std::cout << max(15, 3) << '\n';
  std::cout << max<int>(15, 3) << '\n';
  std::cout << max<>(10.5, 20.8) << '\n';
  std::cout << max<double>(6, 7) << '\n';

  std::cout << someFunc(5, 12.5) << '\n';
  std::cout << someFunc(15, 12.5) << '\n';

  std::cout << incrementByX(5) << '\n';
  std::cout << incrementByX(11.5) << '\n';
  std::cout << incrementByX(19.3F) << '\n';

  printIDValue(12);
  printIDValue(15);
  printIDValue(19);
  return 0;
}
