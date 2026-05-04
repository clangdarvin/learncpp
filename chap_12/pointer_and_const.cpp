#include <iostream>
namespace {
void ptrExample() {
  int x{10};
  int* ptr{&x};
  int y{6};

  std::cout << ptr << '\n';   // address of x{10}
  std::cout << *ptr << '\n';  //{10}
  ptr = &y;

  std::cout << ptr << '\n';   // address of y{6}
  std::cout << *ptr << '\n';  //{6}
  *ptr = 7;

  std::cout << ptr << '\n';   // address of y{6}
  std::cout << *ptr << '\n';  //{7}
}

void doConstPtr() {
  const int x{10};
  const int* ptr{&x};

  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
}

void doConstNewPtr() {
  const int x{10};
  const int* ptr{&x};
  const int z{15};
  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';

  ptr = &z;

  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
}

void constPtr() {
  // The value changed, but the address remained the same
  int x{10};
  int* const ptr{&x};

  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';

  *ptr = 15;

  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
}

void constPtrVal() {
  int x{20};
  const int* const ptr{&x};
  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';
}

void summaryPtr() {
  int day{30};
  int month{4};

  std::cout << "------- a_ptr -------" << '\n';
  int* a_ptr{&day};  // Address: Mutable, Value: Mutable (Fixed comment)
  std::cout << "a_ptr: " << a_ptr << '\n';
  std::cout << "*a_ptr: " << *a_ptr << '\n';
  a_ptr = &month;  // Allowed: changing address
  *a_ptr = month;  // Allowed: changing value
  std::cout << "a_ptr: " << a_ptr << '\n';
  std::cout << "*a_ptr: " << *a_ptr << '\n';

  std::cout << "------- b_ptr -------" << '\n';
  int* const b_ptr{&day};  // Address: Immutable, Value: Mutable
  std::cout << "b_ptr: " << b_ptr << '\n';
  std::cout << "*b_ptr: " << *b_ptr << '\n';
  // b_ptr = &month; // Compile error: address can't be changed
  *b_ptr = month;  // Allowed: changing value
  std::cout << "b_ptr: " << b_ptr << '\n';
  std::cout << "*b_ptr: " << *b_ptr << '\n';

  std::cout << "------- c_ptr -------" << '\n';
  const int* c_ptr{&day};  // Address: Mutable, Value: Immutable
  std::cout << "c_ptr: " << c_ptr << '\n';
  std::cout << "*c_ptr: " << *c_ptr << '\n';
  c_ptr = &month;  // Allowed: changing address
  // *c_ptr = month; // Compile error: value can't be changed
  std::cout << "c_ptr: " << c_ptr << '\n';
  std::cout << "*c_ptr: " << *c_ptr << '\n';

  std::cout << "------- d_ptr -------" << '\n';
  const int* const d_ptr{&day};  // Address: Immutable, Value: Immutable
  std::cout << "d_ptr: " << d_ptr << '\n';
  std::cout << "*d_ptr: " << *d_ptr << '\n';
  // d_ptr = &month; // Compile error: address can't be changed
  // *d_ptr = month; // Compile error: value can't be changed
}

}  // namespace

auto main() -> int {
  // doConstPtr();
  // doConstNewPtr();
  // constPtr();
  // constPtrVal();
  summaryPtr();
  return 0;
}
