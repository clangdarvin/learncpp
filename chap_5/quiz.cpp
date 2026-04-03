#include <iostream>
#include <string>
void questionA() {
  std::cout << "How old are you? ";

  int age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";
  constexpr int legal_age_to_drive{16};
  age >= legal_age_to_drive ? std::cout << "Yes" << '\n'
                            : std::cout << "No" << '\n';
}

void questionB() {
  std::cout << "\nstd::string - a modifiable string" << '\n';
  std::cout << "std::string_view - is a read-only view of a string" << '\n';
}

void questionC() {
  std::cout << "\nEnter the name of person A: ";
  std::string person_a_name{};
  std::getline(std::cin >> std::ws, person_a_name);

  std::cout << "Enter the age of " << person_a_name << ": ";
  int person_a_age{};
  std::cin >> person_a_age;

  std::cout << "Enter the name of person B: ";
  std::string person_b_name{};
  std::getline(std::cin >> std::ws, person_b_name);

  std::cout << "Enter the age of " << person_b_name << ": ";
  int person_b_age{};
  std::cin >> person_b_age;

  if (person_a_age > person_b_age) {
    std::cout << person_a_name << " (age " << person_a_age << ") is older than "
              << person_b_name << " (age " << person_b_age << ").\n";
  } else {
    std::cout << person_b_name << " (age " << person_b_age << ") is older than "
              << person_a_name << " (age " << person_a_age << ").\n";
  }
}

constexpr bool isEven(int n) { return n % 2 == 0; }

int main() {
  // questionA();
  // questionB();
  // questionC();
  std::cout << "Enter an integer: ";
  int n{};
  std::cin >> n;

  if (isEven(n)) {
    std::cout << n << " is even" << '\n';
  } else {
    std::cout << n << " is odd" << '\n';
  }
  return 0;
}
