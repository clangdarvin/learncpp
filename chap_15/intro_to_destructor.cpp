#include <iostream>
#include <string>
class Simple {
 public:
  explicit Simple(int id) : m_id(id) {
    std::cout << "Constructiong Simple() " << m_id << '\n';
  }

  ~Simple() { std::cout << "Destructing Simple() " << m_id << '\n'; }

 private:
  int m_id{};
};

auto main() -> int {
  Simple s1{10};
  return 0;
}

// Purpose of destructor is to free resources consumed by the Class
