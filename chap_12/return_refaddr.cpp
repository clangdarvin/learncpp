#include <iostream>
#include <string>
namespace {
const std::string& getProgramName() {
  static const std::string s_program_name{"Calculator"};
  return s_program_name;
}

void s_counter() {
  static int s_count{0};
  ++s_count;
  std::cout << s_count << '\n';
}
void counter() {
  int count{0};
  ++count;
  std::cout << count << '\n';
}

void displayCounters() {
  std::cout << "Without static keyw" << '\n';
  for (int i{1}; i <= 5; ++i) {
    counter();
  }

  std::cout << "\nWith static keyw" << '\n';
  for (int i{1}; i <= 5; ++i) {
    s_counter();
  }
}
const int& getNextID() {
  static int s_x{0};
  ++s_x;
  return s_x;
}

const std::string& getName() {
  static std::string s_name{};
  std::cout << "Enter a name: ";
  std::cin >> s_name;
  return s_name;
}

void printFirstAlpha(const std::string& s1, const std::string s2) {
  if (s1 < s2) {
    std::cout << s1 << " comes before " << s2 << '\n';
  } else {
    std::cout << s2 << " comes before " << s1 << '\n';
  }
}

const std::string& firstAlpha(const std::string& a, const std::string& b) {
  return (a < b) ? a : b;
}

std::string getHello() { return "Hello"; }

const std::string& foo(const std::string& s) { return s; }

int& max(int& x, int& y) { return (x > y) ? x : y; }
}  // namespace

auto main() -> int {
  std::cout << "Program Name: " << getProgramName() << '\n';
  // displayCounters();
  // const int id_1{getNextID()};
  // const int id_2{getNextID()};
  //
  // std::cout << id_1 << ", " << id_2 << '\n';
  // printFirstAlpha(getName(), getName());
  // std::string wello{"wello"};
  // std::string world{"world"};
  // std::cout << firstAlpha(wello, world) << '\n';
  // const std::string s{getHello()};
  const std::string s{foo(getHello())};
  std::cout << s << '\n';
  // int y{4};
  // const int& ref{y};
  // const int* ptr{&y};

  int x{10};
  int y{15};

  max(x, y) = 20;
  std::cout << x << ", " << y << '\n';
  return 0;
}

// Best practice: avoid returning ref to non-const local static vars
