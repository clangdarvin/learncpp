#include <iostream>
namespace {

void incrementPrint() {
  int value{1};
  ++value;
  std::cout << "Value: " << value << '\n';
}

void staticIncrementPrint() {
  static int value{1};
  ++value;
  std::cout << "Value: " << value << '\n';
}

int generateID() {
  static int s_itemID{0};
  return s_itemID++;
}

constexpr bool g_first_call{true};
int getInteger(bool first_call) {
  std::cout << (first_call ? "Enter an integer: " : "Enter another integer: ");
  int i{};
  std::cin >> i;
  return i;
}
}  // namespace
int main() {
  incrementPrint();
  incrementPrint();
  incrementPrint();

  std::cout << "Static Local Variable..." << '\n';

  staticIncrementPrint();
  staticIncrementPrint();
  staticIncrementPrint();

  std::cout << '\n';
  int a{getInteger(g_first_call)};
  int b{getInteger(!g_first_call)};
  std::cout << a << " + " << b << " = " << (a + b) << '\n';
  return 0;
}

// Best used when avoiding expensive local object initialization of a function
// Global variable: cannot be exported to other files
// Local variable: static duration
