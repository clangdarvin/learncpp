#include <iostream>
class Date {
 public:
  int m_day{};
  int m_month{};
  int m_year{};
};

void printDate(const Date& date) {
  std::cout << date.m_month << "/" << date.m_day << "/" << date.m_year << '\n';
}

// CLASS IMPLEMENTATION
class Employee {
 public:
  int m_id{};
  int m_age{};
  double m_wage{};
};

auto main() -> int {
  Date date{12, 6, 26};
  printDate(date);
  return 0;
}
