#include <iostream>
int main() {
  int area{};
  int length{};
  int width{};

  std::cout << "Enter the length: ";
  std::cin >> length;

  std::cout << "Enter the width: ";
  std::cin >> width;
  area = length * width;

  std::cout << "\nLength: " << length << ", Width: " << width << "\n";
  std::cout << "\nArea of Rectangle: " << area << "\n";

  int x{};
  int y{};
  int z{};

  std::cout << "Enter three numbers: ";
  std::cin >> x >> y >> z;
  std::cout << "You entered " << x << ", " << y << ", " << z << ".\n";
  return 0;
}
