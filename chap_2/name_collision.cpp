#include <iostream>
using namespace std;

void greet_christian() { std::cout << "Good morning, Christian!" << std::endl; }

// int cout() { return 5; }
int main() {
  std::cout << "Hello, Main!" << std::endl;
  greet_christian();

  // returns an error because it's confused between calling the cout() or cout()
  // in the standard library.
  cout << "This is a bad practice. Use std::cout." << endl;
  return 0;
}
