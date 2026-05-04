#include <iostream>
extern int g_x;
extern const int g_y;

void sayHi();
int main() {
  sayHi();
  std::cout << g_x << " " << g_y << '\n';
  return 0;
}
