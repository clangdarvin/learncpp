#include <iostream>
namespace {
void performForLoop() {
  std::cout << "For Loop:" << ' ';
  for (int i{1}; i <= 5; ++i) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

void performWhileLoop() {
  std::cout << "While Loop:" << ' ';
  int i{1};
  while (i <= 5) {
    std::cout << i << ' ';
    ++i;
  }
  std::cout << '\n';
}

void performLoopwMultiCounters() {
  for (int x{0}, y{10}; x < 5; ++x, ++y) {
    std::cout << x << ' ' << y << '\n';
  }
}

void displayRectangle(int height, int width) {
  for (int i{1}; i <= height; ++i) {
    for (int j{1}; j <= width; ++j) {
      std::cout << "*" << ' ';
    }
    std::cout << '\n';
  }
}

void displayQuestion1() {
  for (int i{0}; i <= 20; ++i) {
    if (i % 2 == 0) {
      std::cout << i << '\n';
    }
  }
}

int displayQuestion2(int value) {
  int sum{0};
  for (int i{1}; i <= value; ++i) {
    sum += i;
  }
  return sum;
}

void displayQuestion3() {
  for (int i{9}; i >= 0; --i) {
    std::cout << i << '\n';
  }
}

void fizzbuzz(int n) {
  for (int i{1}; i <= n; ++i) {
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "fizzbuzz" << '\n';
    } else if (i % 3 == 0) {
      std::cout << "fizz" << '\n';
    } else if (i % 5 == 0) {
      std::cout << "buzz" << '\n';
    } else {
      std::cout << i << '\n';
    }
  }
}

void displayQuestion5() {
  for (int i{1}; i <= 150; ++i) {
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "fizzbuzz" << '\n';
    } else if (i % 3 == 0) {
      std::cout << "fizz" << '\n';
    } else if (i % 5 == 0) {
      std::cout << "buzz" << '\n';
    } else if (i % 7 == 0) {
      std::cout << "pop" << '\n';
    } else {
      std::cout << i << '\n';
    }
  }
}
}  // namespace
// namespace
int main() {
  // performForLoop();
  // performWhileLoop();
  // performLoopwMultiCounters();
  // displayRectangle(5, 5);
  // displayQuestion1();
  // int sum{displayQuestion2(5)};
  // std::cout << "Sum: " << sum << '\n';
  // displayQuestion3();
  // fizzbuzz(15);
  displayQuestion5();
  return 0;
}
