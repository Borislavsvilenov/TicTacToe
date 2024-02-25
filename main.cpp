#include <iostream>
#include <string>
#include <vector>

#include "objects/Board.hpp"

int main() {
  int squareSize;
  int player = 1;
  bool run = true;

  Board game = Board(squareSize);

  std::cout << "Enter the size of each square: ";
  std::cin >> squareSize;

  while(run) {
    char X = 0;
    char Y = 0;

    game.drawBoard();
    std::cout << std::endl;

    if(player == 1) {
      std::cout << "player 1's turn: x ";
      std::cin >> X;
      std::cout << std::endl;
      std::cout << "player 1's turn: y ";
      std::cin >> Y;
    }
  }
  return 0;
}

