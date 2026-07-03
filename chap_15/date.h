#pragma once

class Date {
 public:
  Date(int month, int day, int year);
  void print() const;
  [[nodiscard]] int getMonth() const { return m_month; }
  [[nodiscard]] int getDay() const { return m_day; }
  [[nodiscard]] int getYear() const { return m_year; }

 private:
  int m_month{};
  int m_day{};
  int m_year{};
};
