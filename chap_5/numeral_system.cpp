#include <bitset>
// #include <format>
#include <iostream>
int main() {
  const int hex{0xF};
  std::cout << "Hexadecimal: " << hex << '\n';

  const int bin{0b1111};
  std::cout << "Binary: " << bin << '\n';

  const int x{12};
  std::cout << "Decimal: " << x << '\n';
  std::cout << "Decimal to Hexadecimal: " << std::hex << x << '\n';
  std::cout << "Decimal to Octal: " << std::oct << x << '\n';

  std::cout << std::bitset<4>{0b1010} << '\n';
  // std::cout << std::format("{:b}\n", 0b1010);
  //

  std::cout << "32 in Binary: " << std::bitset<8>{0b00100000} << '\n';
  std::cout << "32 in Hex: " << 20 << '\n';
  return 0;
}

// Decimal [0-9]
// Binary [0-1]
// Hexadecimal [0-9, A-F]
// Octal [0-7]
