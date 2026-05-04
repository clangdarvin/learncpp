#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>

#include "random.h"

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

double calculateBallHeight(double tower_height_m, const int x_seconds) {
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

bool isPrime(int x) {
  if (x <= 1) {
    return false;
  } else if (x == 2 || x == 3) {
    return true;
  } else if (x % 2 == 0) {
    return false;
  } else {
    for (int i = 3; i <= std::sqrt(x); i += 2) {
      if (x % i == 0) {
        return false;
      }
    }
    return true;
  }
}

void restartGame();
void startHiLoGame();

int askUserNumber(int attempt) {
  std::cout << "Guess #" << attempt << ": ";
  int number_guess{};
  std::cin >> number_guess;
  return number_guess;
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
  // const double tower_height_m{getTowerHeightInput()};
  // performSimulation(tower_height_m);
  // std::cout << isPrime(6) << '\n';
  // startHiLoGame();
  assert(!isPrime(0));
  assert(!isPrime(1));
  assert(isPrime(2));
  assert(isPrime(3));
  assert(!isPrime(4));
  assert(isPrime(5));
  assert(isPrime(7));
  assert(!isPrime(9));
  assert(isPrime(11));
  assert(isPrime(13));
  assert(!isPrime(15));
  assert(!isPrime(16));
  assert(isPrime(17));
  assert(isPrime(19));
  assert(isPrime(97));
  assert(!isPrime(99));
  assert(isPrime(13417));

  std::cout << "Success!\n";
  return 0;
}
