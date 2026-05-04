#include <iostream>
#include <string_view>

std::string_view getQuantityPhrase(int num_apples) {
  std::string_view phrase{};
  if (num_apples > 3) {
    phrase = "many";
  } else if (num_apples == 3) {
    phrase = "a few";
  } else if (num_apples == 2) {
    phrase = "a couple of";
  } else if (num_apples == 1) {
    phrase = "a single";
  } else if (num_apples == 0) {
    phrase = "no";
  } else {
    phrase = "negative";
  }
  return phrase;
}

std::string_view getApplesPluralized(int num_apples) {
  return (num_apples > 1 ? "apples" : "apple");
}

int main() {
  constexpr int mary_apples{3};
  std::cout << "Mary has " << getQuantityPhrase(mary_apples) << ' '
            << getApplesPluralized(mary_apples) << '\n';
  std::cout << "How many apples do you have? ";
  int apples_num{};
  std::cin >> apples_num;
  std::cout << "You have " << getQuantityPhrase(apples_num) << ' '
            << getApplesPluralized(apples_num) << '\n';
}
