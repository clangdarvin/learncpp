#include <iostream>

struct Date {
 public:
  int year{};
  int month{};
  int day{};

  void print() const {
    std::cout << month << "/" << day << "/" << year << '\n';
  }
};

void foo(const Date& date) { date.print(); }

auto main() -> int {
  Date today{.year = 2026, .month = 6, .day = 12};
  today.print();  // This will not work if the member function is not const
  foo(today);
  return 0;
}
