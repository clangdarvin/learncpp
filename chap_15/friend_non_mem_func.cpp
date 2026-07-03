#include <cmath>
#include <iostream>
class Accumulator {
 private:
  int m_value{0};

 public:
  void add(int value) { m_value += value; }
  int value() const { return m_value; }
};

static void print(const Accumulator& accumulate) {
  std::cout << accumulate.value() << '\n';
}
class Value {
 private:
  int m_value{};

 public:
  explicit Value(int v) : m_value{v} {}

  [[nodiscard]] bool isEqualToMember(const Value& v) const;
  friend bool isEqualToNonMember(const Value& v_a, const Value& v_b);
  static void displayHelloWorld() { std::cout << "Hello, World!" << '\n'; }
};

bool Value::isEqualToMember(const Value& v) const {
  return m_value == v.m_value;
}

bool isEqualToNonMember(const Value& v_a, const Value& v_b) {
  return v_a.m_value == v_b.m_value;
}

class Humidity;

class Temperature {
 private:
  int m_temp{0};

 public:
  Temperature(int temp) : m_temp{temp} {}

  friend void printWeather(const Temperature& temp, const Humidity& humid);
};

class Humidity {
 private:
  int m_humidity{0};

 public:
  Humidity(int humidity) : m_humidity(humidity) {}

  friend void printWeather(const Temperature& temp, const Humidity& humid);
};

void printWeather(const Temperature& temp, const Humidity& humid) {
  std::cout << "Temperature: " << temp.m_temp << '\n';
  std::cout << "Humidity: " << humid.m_humidity << '\n';
}

auto main() -> int {
  Value v_a{15};
  Value v_b{20};

  std::cout << v_a.isEqualToMember(v_b) << '\n';
  std::cout << isEqualToNonMember(v_a, v_b) << '\n';
  Value::displayHelloWorld();

  Humidity humid{20};
  Temperature temp{35};
  printWeather(temp, humid);

  Accumulator acc{};
  acc.add(30);
  print(acc);
  return 0;
}
