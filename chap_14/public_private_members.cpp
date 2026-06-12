#include <ios>
#include <iostream>
#include <string_view>
class Date {
 public:
  void print() const {
    std::cout << m_month << "/" << m_day << "/" << m_year << '\n';
  }

 private:
  int m_year{2026};
  int m_month{6};
  int m_day{12};
};

class Person {
 private:
  std::string_view m_name;

 public:
  void passes(const Person& p) const {
    std::cout << m_name << " passes the ball to " << p.m_name << '\n';
  }

  void setName(std::string_view name) { m_name = name; }
};

class Point3D {
 private:
  int m_x{};
  int m_y{};
  int m_z{};

 public:
  void setValues(int x, int y, int z) {
    m_x = x;
    m_y = y;
    m_z = z;
  }

  void print() const {
    std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << '\n';
  }

  bool isEqual(Point3D& p) const {
    return ((p.m_x == m_x) && (p.m_y == m_y) && (p.m_z == m_z));
  }
};
auto main() -> int {
  Date d{};
  d.print();

  Person p1;
  p1.setName("Lebron");

  Person p2;
  p2.setName("Curry");

  p1.passes(p2);

  Point3D point_a;
  point_a.setValues(5, 10, 15);
  point_a.print();

  Point3D point_b;
  point_b.setValues(10, 20, 30);

  Point3D point_c;
  point_c.setValues(5, 10, 15);

  std::cout << "is point_a equal to point_b? " << std::boolalpha
            << point_a.isEqual(point_b) << '\n';

  std::cout << "is point_a equal to point_c? " << std::boolalpha
            << point_a.isEqual(point_c) << '\n';
  return 0;
}

// Access levels: public, private, protected
// Private data members should use the prefix m_variable_name
// Class member variables: private, member functions: public
// Struct avoid using access specifiers
//
// Structs if there's no need for restricting access, aggregate initilization is
// okay, no class invariants, setup and cleanup needs
