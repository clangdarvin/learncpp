#include <array>
#include <iostream>
#include <memory>
namespace {
enum FanSpeed : int { off, low, medium, high };
enum Infected { runner, stalker, clicker, bloater, shambler, rat_king };
enum Animal { dog, cat, lion, shark, squirrel };
constexpr std::array<FanSpeed, 4> fan_speeds{off, low, medium, high};
}  // namespace

auto main() -> int {
  Animal animal{static_cast<Animal>(2)};
  animal = static_cast<Animal>(4);
  for (FanSpeed fan_speed : fan_speeds) {
    std::cout << fan_speed << '\n';
  }
  return 0;
}
