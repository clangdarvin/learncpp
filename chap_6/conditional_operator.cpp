#include <ios>
#include <iostream>
#include <string_view>

constexpr int getMax(int x, int y) { return (x > y) ? x : y; }

constexpr int getAbsolute(int x) { return (x < 0) ? -x : x; }

constexpr std::string_view getGradeStatus(int student_grade) {
  constexpr int passing_grade{75};
  return (student_grade >= passing_grade) ? "Passed" : "Failed";
}
int main() {
  const int age{30};
  constexpr int required_age_to_drive{18};
  bool is_allowed_to_drive{age >= required_age_to_drive};

  std::cout << "Age: " << age << '\n';
  std::cout << "Age requirement to drive: " << required_age_to_drive << '\n';
  std::cout << "Is allowed to drive? " << std::boolalpha << is_allowed_to_drive
            << '\n';

  constexpr int x{5};
  constexpr int y{2};
  std::cout << "max(" << x << "," << y << "): " << getMax(x, y) << '\n';
  std::cout << "Absolute Value of -5: " << getAbsolute(-5) << '\n';

  constexpr std::string_view student_a_grade_status{getGradeStatus(95)};
  std::cout << "Student A: " << student_a_grade_status << '\n';

  constexpr int battery_level{99};
  constexpr std::string_view performance_mode{
      (battery_level > 20) ? "Normal Mode" : "Low Power Mode"};
  std::cout << "Battery Level at " << battery_level << "%: " << performance_mode
            << '\n';

  bool is_user_logged_in{false};
  std::string_view notification_status{is_user_logged_in ? "Welcome Back!"
                                                         : "Please log in."};
  std::cout << notification_status << '\n';
  return 0;
}
