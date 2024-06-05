/*
Rock Paper Scissors
*/

#include <iostream>
#include <stdlib.h>

int main() {
  
  srand (time(NULL));

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << rand() % 3 + 1 << "\n";
  std::cout << rand() % 3 + 1 << "\n";
  std::cout << rand() % 3 + 1 << "\n";

  std::cout << "====================\n";
  std::cout << "ROCK PAPER SCISSORS!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "Shoot! ";

  std::cin >> user;

  if (user == 1)
    std::cout << "You chose: ✊\n";
  else if (user == 2)
    std::cout << "You chose: ✋\n";
  else
    std::cout << "You chose: ✌️\n";

  if (computer == 1)
    std::cout << "CPU chose: ✊\n";
  else if (computer == 2)
    std::cout << "CPU chose: ✋\n";
  else
    std::cout << "CPU chose: ✌️\n";

  if (user == computer) {
    std::cout << "It's a tie!\n";
  }
  // user rock
  else if (user == 1) {
    if (computer == 2) {
      std::cout << "You lost!\n";
    }
    if (computer == 3) {
      std::cout << "You won!\n";
    }
  }
  // user paper
  else if (user == 2) {
    if (computer == 1) {
      std::cout << "You won!\n";
    }
    if (computer == 3) {
      std::cout << "You lost!\n";
    }
  }
  // user scissors
  else if (user == 3) {
    if (computer == 1) {
      std::cout << "You won!\n";
    }
    if (computer == 2) {
      std::cout << "You lost!\n";
    }
  }
  return 0;

}
