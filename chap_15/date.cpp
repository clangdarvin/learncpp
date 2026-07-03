#include "date.h"

#include <iostream>

Date::Date(int month, int day, int year)
    : m_month(month), m_day(day), m_year(year) {}

void Date::print() const {
  std::cout << m_month << "/" << m_day << "/" << m_year << '\n';
}
