#include <iostream>
namespace {
void printIDNumber() { std::cout << "Your ID is not known" << '\n'; }

void printIDNumber(int id) { std::cout << "Your ID: " << id << '\n'; }

void nullify(int*& ptr) { ptr = nullptr; }
}  // namespace

auto main() -> int {
  printIDNumber();
  int user_id{35};
  printIDNumber(user_id);
  printIDNumber(30);

  int* ptr{&user_id};
  std::cout << "ptr: " << ((ptr != nullptr) ? "non-null" : "null") << '\n';
  nullify(ptr);
  std::cout << "ptr: " << ((ptr != nullptr) ? "non-null" : "null") << '\n';
  return 0;
}
