#include <iostream>
int main() {
  int attempts{5};
  int const computer_number{3};
  bool won{false};

  while (attempts > 0) {
    std::cout << "What's your guess? [1-10]: ";
    int user_answer{};
    std::cin >> user_answer;
    if (user_answer > computer_number) {
      attempts--;
      std::cout << "Too High" << '\n';
    } else if (user_answer < computer_number) {
      attempts--;
      std::cout << "Too Low" << '\n';
    } else {
      std::cout << "You're correct!" << '\n';
      won = true;
      break;
    }
    std::cout << "You have " << attempts << " attempts left." << '\n';
  }
  if (!won) {
    std::cout << "\nBetter luck next time, kiddo!" << '\n';
  }
}
