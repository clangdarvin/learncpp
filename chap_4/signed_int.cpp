#include <iostream>
int main() {
  short const short_example{32000};
  int const int_example{30000};
  long const long_example{1000000};
  long long const ll_example{1000000000000};

  std::cout << "Short: " << short_example << '\n';
  std::cout << "Int: " << int_example << '\n';
  std::cout << "Long: " << long_example << '\n';
  std::cout << "Long Long: " << ll_example << '\n';

  std::cout << "13/5: " << (13 / 5) << '\n';
  std::cout << "-13/5: " << (-13 / 5) << '\n';
}
