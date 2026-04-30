#include <iostream>
namespace {
void displayAddress(auto& x) {
  std::cout << "x: " << x << '\n';
  std::cout << "Address: " << &x << '\n';
}

void ptrDiffObj() {
  int x{10};
  int* ptr{&x};
  std::cout << *ptr << '\n';

  int y{5};
  ptr = &y;
  std::cout << *ptr << '\n';
}

void ptrDiffValue() {
  int x{10};
  int* ptr{&x};

  std::cout << x << '\n';
  std::cout << *ptr << '\n';

  *ptr = 5;

  std::cout << x << '\n';
  std::cout << *ptr << '\n';
}

void danglingPointers() {
  int x{5};
  int* ptr{&x};
  std::cout << *ptr << '\n';

  {
    int y{10};
    ptr = &y;
    std::cout << *ptr << '\n';
  }

  std::cout << *ptr << '\n';
}
}  // namespace

namespace Quiz {
void displayQuestion1() {
  short value{7};
  short other_value{3};

  short* ptr{&value};

  std::cout << '\n';
  std::cout << &value << '\n';
  std::cout << value << '\n';
  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
  std::cout << '\n';

  *ptr = 9;
  std::cout << &value << '\n';
  std::cout << value << '\n';
  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
  std::cout << '\n';

  ptr = &other_value;
  std::cout << &other_value << '\n';
  std::cout << other_value << '\n';
  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
  std::cout << '\n';

  std::cout << sizeof(ptr) << '\n';
  std::cout << sizeof(*ptr) << '\n';
}
}  // namespace Quiz
auto main() -> int {
  // int x{20};
  // displayAddress(x);
  // std::cout << *(&x) << '\n';
  //
  // int y{5};
  // int& ref{y};
  // int* ptr{&x};
  //
  // std::cout << *ptr << '\n';
  ptrDiffObj();
  std::cout << '\n';
  ptrDiffValue();
  std::cout << '\n';

  int x{5};
  std::cout << typeid(x).name() << '\n';
  std::cout << typeid(&x).name() << '\n';

  char* chptr{};
  int* iptr{};
  long double* ldptr{};

  std::cout << sizeof(chptr) << '\n';
  std::cout << sizeof(iptr) << '\n';
  std::cout << sizeof(ldptr) << '\n';

  std::cout << '\n';
  danglingPointers();

  Quiz::displayQuestion1();
  return 0;
}
