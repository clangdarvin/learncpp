#include <ios>
#include <iostream>
#include <limits>

#include "random.h"
namespace {

void restartGame();
void startHiLoGame();

int askUserNumber(int attempt) {
  while (true) {
    int number_guess{};
    std::cout << "Guess #" << attempt << ": ";
    std::cin >> number_guess;

    bool success{std::cin};
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (!success || number_guess > 100 || number_guess < 1) {
      continue;
    }
    return number_guess;
  }
}

void displayGameMechanics() {
  std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. "
               "You have 7 tries to guess what it is."
            << '\n';
}

void guessingLoop() {
  constexpr int attempts{7};
  const int random_number{Random::get(1, 100)};
  bool user_winner{false};

  if (!user_winner) {
    for (int i{1}; i <= attempts && !user_winner; ++i) {
      int number_guess{askUserNumber(i)};

      if (number_guess == random_number) {
        user_winner = true;
        std::cout << "Correct! You win!" << '\n';
      } else if (number_guess < random_number) {
        std::cout << "Too Low" << '\n';
      } else {
        std::cout << "Too High" << '\n';
      }
    }
  }

  if (!user_winner) {
    std::cout << "Sorry, you lose. The correct number was " << random_number
              << "." << '\n';
  }

  restartGame();
}

void restartGame() {
  bool ask_user{true};
  while (ask_user) {
    std::cout << "Would you like to play again (y/n): ";
    char option{};
    std::cin >> option;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (option) {
      case 'y':
        startHiLoGame();
        ask_user = false;
        break;
      case 'n':
        ask_user = false;
        std::cout << "Thank you for playing." << '\n';
        break;
      default:
        std::cout << "Invalid Input. Enter either y or n. " << '\n';
        break;
    }
  }
}

void startHiLoGame() {
  displayGameMechanics();
  guessingLoop();
}
}  // namespace
int main() {
  startHiLoGame();
  return 0;
}
