#include <iostream>
int main() {
  std::cout << "Enter a keyboard character (a,w,s,d): ";
  char keyboard_char{};
  std::cin >> keyboard_char;
  switch (keyboard_char) {
    case 'a':
      std::cout << "Moving Left..." << '\n';
      break;
    case 'w':
      std::cout << "Moving Forward..." << '\n';
      break;
    case 's':
      std::cout << "Moving Backward..." << '\n';
      break;
    case 'd':
      std::cout << "Moving Right..." << '\n';
      break;
    default:
      std::cout << "Invalid Character. Please choose between (a,s,w,d)."
                << '\n';
      break;
  }
  return 0;
}
