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

void question3() {
  int outer{5};
  while (outer >= 1) {
    int inner{outer};
    while (inner >= 1) {
      std::cout << inner << ' ';
      --inner;
    }
    std::cout << '\n';
    --outer;
  }
}

void question4() {
  /*
   * Instead of using another variable (k), I can just check whether j <= i in
   * the inner loop. k must be intialized to 1 and perform increment.
   */
  int i{5};
  int k{1};
  while (i >= 1) {
    int j{5};
    while (j >= 1) {
      if (j > k) {
        std::cout << " " << ' ';
      } else {
        std::cout << j << ' ';
      }
      --j;
    }
    ++k;
    std::cout << '\n';
    --i;
  }
}

}  // namespace

int main() {
  // whileLoop();
  // intentionalWhileLoop();
  // doNIterations();
  // nestedLoops();
  // question2();
  // question3();
  question4();
  return 0;
}  // namespace
