#include <cstdint>
#include <ios>
#include <iostream>

// Question 1
void displayQuestion1() {
  constexpr int user_age{24};
  constexpr bool user_check_updates{false};
  constexpr double pi{3.14159265};
  constexpr int pages_of_jurassic_park{464};
  constexpr float couch_length_ft{5.12F};
  constexpr std::int32_t times_blinked{5000000};
  constexpr char user_choice{'a'};
  constexpr std::int16_t birth_year_of_albert_camus{1913};

  std::cout << "Age: " << user_age << '\n';
  std::cout << std::boolalpha << "Check updates? " << user_check_updates
            << '\n';
  std::cout << "Value of PI: " << pi << '\n';
  std::cout << "Number of pages in Jurassic Park: " << pages_of_jurassic_park
            << '\n';
  std::cout << "Couch Length (ft): " << couch_length_ft << '\n';
  std::cout << "Times blinked: " << times_blinked << '\n';
  std::cout << "User choice from the given menu: " << user_choice << '\n';
  std::cout << "Birth Year of Albert Camus: " << birth_year_of_albert_camus
            << '\n';
  std::cout << '\n';
}
// Question 1

// Question 2
double getNumberInput() {
  std::cout << "Enter a double value: ";
  double n{};
  std::cin >> n;
  return n;
}

char getArithmeticOperatorInput() {
  std::cout << "\n=== Arithmetic Operations ===" << '\n';
  std::cout << "Addition: [+]\nSubtraction: [-]\nMultiplication: "
               "[*]\nDivision: [/]"
            << '\n';
  std::cout << "\nPlease choose between [+, -, *, /]: ";
  char arithmetic_operator{};
  std::cin >> arithmetic_operator;
  return arithmetic_operator;
}

constexpr double performCalculation(double x, double y,
                                    char arithmetic_operator) {
  switch (arithmetic_operator) {
    case '+':
      return (x + y);
      break;
    case '-':
      return (x - y);
      break;
    case '*':
      return (x * y);
      break;
    case '/':
      return (x / y);
      break;
    default:
      return -1;
      break;
  }
}

void displayResult(double x, double y, char arithmetic_operator,
                   double result) {
  std::cout << '\n';
  if (result != -1) {
    std::cout << x << " " << arithmetic_operator << " " << y << ": " << result
              << '\n';
  } else {
    std::cout << "Invalid Operator. Calculation cancelled..." << '\n';
  }
}
// Question 2

// Question 3
double getTowerHeightInput() {
  std::cout << "\nEnter the height of the tower in meters: ";
  double tower_height_m{};
  std::cin >> tower_height_m;
  return tower_height_m;
}

constexpr double calculateBallHeight(double tower_height_m, int x_seconds) {
  constexpr double gravity_constant{9.8};
  const double distance_fallen{gravity_constant * (x_seconds * x_seconds) / 2};
  const double ball_height{tower_height_m - distance_fallen};
  if (ball_height < 0.0) {
    return 0.0;
  }
  return ball_height;
}

void displayBallHeight(double ball_height, int x_seconds) {
  if (ball_height > 0) {
    std::cout << "At " << x_seconds
              << " seconds, the ball is at height: " << ball_height << " meters"
              << '\n';
  } else {
    std::cout << "At " << x_seconds << " seconds, the ball is on the ground. "
              << '\n';
  }
}

void performSimulation(double tower_height_m) {
  double ball_height{};
  constexpr int n_iterations{6};
  for (int i = 0; i < n_iterations; i++) {
    ball_height = calculateBallHeight(tower_height_m, i);
    displayBallHeight(ball_height, i);
  };
}
// Question 3

int main() {
  // === Question 1 ===
  displayQuestion1();

  // === Question 2 ===
  const double x{getNumberInput()};
  const double y{getNumberInput()};
  const char arithmetic_operator{getArithmeticOperatorInput()};
  const double result{performCalculation(x, y, arithmetic_operator)};
  displayResult(x, y, arithmetic_operator, result);

  // === Question 3 ===
  const double tower_height_m{getTowerHeightInput()};
  performSimulation(tower_height_m);
  return 0;
}
