#include <string>
class Human {
 public:
  Human(std::string name, int age, char sex, bool is_working)
      : m_name(name), m_age(age), m_sex(sex), m_is_working(is_working) {}
  const std::string& getName() const { return m_name; }

  int getAge() const { return m_age; }

 private:
  std::string m_name;
  int m_age;
  char m_sex;
  bool m_is_working;
};
