#include <iostream>
#include <string>
namespace {
void printByValue(std::string v) {
  std::cout << v << '\n';
  std::cout << &v << '\n';
  std::cout << '\n';
}

void printByReference(const std::string& ref) {
  std::cout << ref << '\n';
  std::cout << &ref << '\n';
  std::cout << '\n';
}

void printByAddress(const std::string* ptr) {
  std::cout << *ptr << '\n';
  std::cout << ptr << '\n';
  std::cout << '\n';
}

void printMyAge(const int* ptr) {
  // if value needs to be modified, remove const
  if (ptr == nullptr) {
    return;
  }

  std::cout << "Age: " << *ptr << '\n';
}

void printV(const int& v) {
  std::cout << v << '\n';
  std::cout << &v << '\n';
}

}  // namespace

auto main() -> int {
  // std::string str{"I love C++"};
  // std::cout << "str address: " << &str << '\n';
  //
  // printByValue(str);
  // printByReference(str);
  // std::string* ptr{&str};
  // printByAddress(ptr);
  // printByAddress(&str); // just the same as defining a pointer var
  // constexpr int age{40};
  // printMyAge(&age);
  int value{100};
  printV(value);
  return 0;
}

// Best Practice: Prefer pass by reference (const int& x)
