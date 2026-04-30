#include <iostream>
namespace {
void ptrExample() {
  int x{6};
  int* ptr{&x};
  std::cout << "&x: " << &x << '\n';
  std::cout << "*ptr: " << *ptr << '\n';
}

void nullPtrExample() {
  int* ptr{nullptr};
  int x{30};
  ptr = &x;
  std::cout << "ptr: " << ptr << '\n';
  std::cout << "*ptr: " << *ptr << '\n';
}

void checkNullPtr() {
  int x{5};
  int* ptr{&x};
  if (ptr == nullptr) {
    std::cout << "null" << '\n';
  } else {
    std::cout << "non-null" << '\n';
  }

  if (ptr) {
    std::cout << "non-null" << '\n';
  } else {
    std::cout << "null" << '\n';
  }
}
}  // namespace

namespace Quiz {
void q1() {
  int x{10};
  int* ptr{nullptr};
  if (ptr != nullptr) {
    std::cout << *ptr << '\n';
  } else {
    std::cout << "NULLPTR" << '\n';
  }
}

}  // namespace Quiz

auto main() -> int {
  // ptrExample();
  // nullPtrExample();
  // checkNullPtr();

  int x{50};
  int* ptr{&x};
  if (ptr != nullptr) {
    std::cout << *ptr << '\n';
  } else {
    std::cout << "Pointer is null" << '\n';
  }

  Quiz::q1();
  // Favor reference over pointers
  return 0;
}
