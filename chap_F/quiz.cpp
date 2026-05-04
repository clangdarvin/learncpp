#include <iostream>
namespace Constants {
constexpr double gravity{9.8};
}
namespace {

double getTowerHeightInput() {
  std::cout << "\nEnter the height of the tower in meters: ";
  double tower_height_m{};
  std::cin >> tower_height_m;
  return tower_height_m;
}

constexpr auto calculateBallHeight(double tower_height_m, const int x_seconds) {
  const double distance_fallen{Constants::gravity * (x_seconds * x_seconds) /
                               2};
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
  constexpr int n_iterations{6};
  for (int i = 0; i < n_iterations; i++) {
    double ball_height{calculateBallHeight(tower_height_m, i)};
    displayBallHeight(ball_height, i);
  };
}

}  // namespace

auto main() -> int {
  performSimulation(100);
  return 0;
}
