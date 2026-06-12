#include <ios>
#include <iostream>
#include <istream>
#include <limits>
#include <optional>
#include <ostream>
#include <string>
#include <string_view>
namespace {
enum LifePath { nomad, streetkid, corpo };

constexpr std::string_view getLifePath(LifePath life_path) {
  // One approach that we can do to display the corresponding string
  switch (life_path) {
    case nomad:
      return "nomad";
    case streetkid:
      return "streetkid";
    case corpo:
      return "corpo";
    default:
      return "invalid";
  }
}

constexpr std::optional<LifePath> getLifePathFromString(std::string_view sv) {
  if (sv == "nomad") {
    return nomad;
  }
  if (sv == "streetkid") {
    return streetkid;
  }
  if (sv == "corpo") {
    return corpo;
  }
  return {};
}

std::ostream& operator<<(std::ostream& out, LifePath life_path) {
  return out << getLifePath(life_path);
}

std::istream& operator>>(std::istream& in, LifePath& life_path) {
  std::string s{};
  in >> s;
  std::optional<LifePath> match{getLifePathFromString(s)};
  if (!match) {
    in.setstate(std::ios_base::failbit);
  } else {
    life_path = *match;
    return in;
  }
  return in;
}
}  // namespace

auto main() -> int {
  LifePath life_path{corpo};
  std::cout << "You chose the " << life_path << " life path." << '\n';
  std::cout << "Enter a life path: ";
  LifePath path{};
  std::cin >> path;
  if (std::cin) {
    std::cout << "You chose " << getLifePath(path) << '\n';
  } else {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid Input." << '\n';
  }
  return 0;
}
