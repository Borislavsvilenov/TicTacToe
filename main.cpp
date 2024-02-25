#include <iostream>
#include <string>
#include <vector>

#include "objects/Board.hpp"

int main() {
  int squareSize;
  int player = 1;
  bool run = true;

  std::cout << "Enter the size of each square: ";
  std::cin >> squareSize;

  Board game = Board(squareSize);
  
  while(run) {
    char Xin = 0;
    char Yin = 0;

    game.drawBoard();
    std::cout << std::endl;

    if(player == 1) {

      std::cout << "player 1's turn: x ";
      std::cin >> Xin;
      std::cout << std::endl;
      std::cout << "player 1's turn: y ";
      std::cin >> Yin;
      std::cout << std::endl;
      player = 2;

    } else if(player == 2) {

      std::cout << "player 2's turn: x ";
      std::cin >> Xin;
      std::cout << std::endl;
      std::cout << "player 2's turn: y ";
      std::cin >> Yin;
      std::cout << std::endl;
      player = 1;

    }
  }
  return 0;
}

