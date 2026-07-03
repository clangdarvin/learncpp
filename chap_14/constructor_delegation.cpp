#include <any>
#include <cmath>
#include <iostream>
#include <string>
#include <string_view>
class Employee {
 public:
  explicit Employee(std::string_view name, int id = 0)
      : m_name(name), m_id(id) {}
  [[nodiscard]] const std::string& getName() const { return m_name; }
  [[nodiscard]] int getID() const { return m_id; }

 private:
  std::string m_name;
  int m_id{0};
};

void print(const Employee& employee) {
  std::cout << employee.getName() << ", " << employee.getID() << '\n';
}

class Ball {
 public:
  Ball(std::string_view color = "black", double radius = 10.0)
      : m_color(color), m_radius(radius) {}

  explicit Ball(double radius, std::string_view color = "black")
      : m_color(color), m_radius(radius) {}

  const std::string& getColor() const { return m_color; }
  double getRadius() const { return m_radius; }

 private:
  std::string m_color{};
  double m_radius{};
};

void printBall(const Ball& ball) {
  std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ") "
            << '\n';
}
auto main() -> int {
  Employee ea{"Christian", 1};
  print(ea);

  Ball def{};
  printBall(def);

  Ball blue{"blue"};
  printBall(blue);

  Ball twenty{20.0};
  printBall(twenty);

  Ball blue_twenty{"blue", 20.0};
  printBall(blue_twenty);
  return 0;
}
