#include <iostream>
namespace constants {
constexpr int minimum_ride_height_cm{140};
}

int main() {
  std::cout << "Enter your height (cm): ";
  int user_height{};
  std::cin >> user_height;

  if (user_height >= constants::minimum_ride_height_cm) {
    std::cout << "Allowed" << '\n';
  } else {
    std::cout << "Not allowed. Better luck next time, kiddo!" << '\n';
  }
  return 0;
}

// if statement and switch statement
