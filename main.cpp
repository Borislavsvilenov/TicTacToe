#include <iostream>
#include <string>

#include "objects/Board.hpp"

int main() {
  int squareSize;
  int player = 1;
  bool run = true;

  std::cout << "Enter the size of each square: ";
  std::cin >> squareSize;

  Board game = Board(squareSize);
  
  while(run) {
    std::string Xin = "0";
    std::string Yin = "0";

    int X = 0;
    int Y = 0;

    game.drawBoard();
    std::cout << std::endl;

    if(player == 1) {

      std::cout << "player 1's turn: x ";
      std::cin >> Xin;
      std::cout << std::endl;
      std::cout << "player 1's turn: y ";
      std::cin >> Yin;
      std::cout << std::endl;
      
      X = std::stoi(Xin);
      Y = std::stoi(Yin);
      
      game.moves[Y][X] = " x ";

      player = 2;

    } else if(player == 2) {

      std::cout << "player 2's turn: x ";
      std::cin >> Xin;
      std::cout << std::endl;
      std::cout << "player 2's turn: y ";
      std::cin >> Yin;
      std::cout << std::endl;
      
      X = std::stoi(Xin);
      Y = std::stoi(Yin);
      
      game.moves[Y][X] = " o ";

      player = 1;

    }
  }
  return 0;
}

