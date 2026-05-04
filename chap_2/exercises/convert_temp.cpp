#include <iostream>
double celsius_to_fahrenheit(double celsius) { return (celsius * 1.8) + 32; }

double fahrenheit_to_celsius(double fahrenheit) {
  return (fahrenheit - 32) / 1.8;
}

int user_prompt() {
  std::cout << "[1]: Celsius to Fahrenheit\n[2]: Fahrenheit to Celsius\n";
  int choice{};
  std::cout << "Enter [1] or [2]: ";
  std::cin >> choice;
  return choice;
}

int main() {
  switch (user_prompt()) {
    case 1: {
      std::cout << "\nEnter Celsius: ";
      double celsius{};
      std::cin >> celsius;
      std::cout << "\nFahrenheit: " << celsius_to_fahrenheit(celsius) << "°F"
                << std::endl;
      break;
    }
    case 2: {
      std::cout << "\nEnter Fahrenheit: ";
      double fahrenheit{};
      std::cin >> fahrenheit;

      std::cout << "\nCelsius: " << fahrenheit_to_celsius(fahrenheit) << "°C"
                << std::endl;
      break;
    }
    default:
      std::cout << "You must choose between 1 or 2." << std::endl;
      break;
  }

  return 0;
}
