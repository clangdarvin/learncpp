#include <iostream>
int g_mode;
void doSomething() {
  std::cout << "Performing action..." << '\n';
  g_mode = 2;
}

void displayGMode(int gmode) { std::cout << "g_mode: " << gmode << '\n'; }

double getPi();

int main() {
  g_mode = 1;
  displayGMode(g_mode);
  doSomething();
  displayGMode(g_mode);
  std::cout << (g_mode == 1
                    ? "No threat detected"
                    : "Launching nuclear missiles in T-minus 10 seconds")
            << '\n';
  std::cout << getPi() << '\n';
}
