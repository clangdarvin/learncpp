#include <iostream>
int main() {
  double const earth_mass = 5.97e24;
  std::cout << "Mass of Earth (kg): " << std::fixed << earth_mass << "kg"
            << '\n';

  double const learning_rate = 1e-3;
  std::cout << "Learning Rate: " << std::fixed << learning_rate << '\n';

  double const speed_of_light = 3e8;
  std::cout << "Speed of Light: " << std::fixed << speed_of_light << " m/s"
            << '\n';

  std::cout << std::fixed << (3.450e1) << '\n';
  std::cout << std::fixed << (4.000e-3) << '\n';
  std::cout << std::fixed << (1.23005e2) << '\n';
  std::cout << std::fixed << (1.46e5) << '\n';
  std::cout << std::fixed << (1.46000001e5) << '\n';
  std::cout << std::fixed << (8e-10) << '\n';
  return 0;
}
