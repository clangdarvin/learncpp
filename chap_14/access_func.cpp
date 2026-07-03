#include <iostream>
class Date {
 private:
  int m_year{2026};
  int m_month{6};
  int m_day{12};

 public:
  void print() const {
    std::cout << m_month << "/" << m_day << "/" << m_year << '\n';
  }

  int getYear() const { return m_year; }

  int getMonth() const { return m_month; }

  int getDay() const { return m_day; }

  void setYear(int year) { m_year = year; }

  void setMonth(int month) { m_month = month; }

  void setDay(int day) { m_day = day; }
};

auto main() -> int {
  Date d{};
  d.setYear(2077);
  d.print();
  return 0;
}
