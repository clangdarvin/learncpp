#include <format>
#include <iostream>
namespace {
void whileLoop() {
  int count{1};
  while (count <= 5) {
    std::cout << count << '\n';
    ++count;
  }
  std::cout << "DONE" << '\n';
}

void intentionalWhileLoop() {
  while (true) {
    std::cout << "Loop again [y/n]: ";
    char choice{};
    std::cin >> choice;
    if (choice == 'n') {
      std::cout << "Okay bye." << '\n';
      break;
    }
  }
}

void doNIterations() {
  int count{1};
  while (count <= 50) {
    if (count < 10) {
      std::cout << '0';
    }
    std::cout << count << ' ';

    if (count % 10 == 0) {
      std::cout << '\n';
    }
    ++count;
  }
}

void printUpTo(int outer) {
  int inner{1};
  while (inner <= outer) {
    std::cout << inner << ' ';
    ++inner;
  }
}

void nestedLoops() {
  int jjj{1};
  while (jjj <= 5) {
    int iii{1};
    while (iii <= jjj) {
      std::cout << iii << ' ';
      ++iii;
    }
    std::cout << '\n';
    ++jjj;
  }
}

void question2() {
  std::cout << "char\tdec\tbinary" << '\n';
  char letter{'a'};
  while (letter <= 'z') {
    std::cout << letter << '\t' << static_cast<int>(letter) << '\t'
              << std::format("{:b}", letter) << '\n';
    ++letter;
  }
}

void question3() {}
void question4() {}

}  // namespace

int main() {
  // whileLoop();
  // intentionalWhileLoop();
  // doNIterations();
  // nestedLoops();
  question2();
  return 0;
}  // namespace
