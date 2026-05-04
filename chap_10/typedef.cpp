#include <cstdint>
#include <iostream>
#include <utility>
#include <vector>

namespace {
using VectPairSi = std::vector<std::pair<std::string, int>>;
bool foo(VectPairSi pairlist) {}

using PrintError = int;
void printData();

}  // namespace
int main() {
  using Distance = double;
  Distance milesToDestination{3.4};
  std::cout << milesToDestination << " miles" << '\n';

  std::int8_t x{97};
  std::cout << x << '\n';
  VectPairSi pairlist;
  PrintError printData();
  return 0;
}
