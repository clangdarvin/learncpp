#include <iostream>
int main() {
  std::cout << "Enter an intger: ";
  int num{};
  std::cin >> num;
  std::cout << "Enter a larger integer: ";
  int larger_num{};
  std::cin >> larger_num;

  if (num > larger_num) {
    // Perform swap
    int temp{larger_num};
    larger_num = num;
    num = temp;
  }
  std::cout << "Smaller Value: " << num << '\n';
  std::cout << "Larger Value: " << larger_num << '\n';
}
