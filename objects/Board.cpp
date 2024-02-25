#include "Board.hpp"

Board::Board(int s) {
  this->size = s;
  for(int a = 0; a < 3; a++) {
    for(int b = 0; b < 3; b++) {
      this->moves[a][b] = "   ";
    }
  }
}

void Board::drawBoard() {
  int cellSize = this->size + 1; 
  int boardSize = 3 * cellSize - 1;

  int movesX = 0;
  int movesY = 0;

  bool genNewLineP = false;
  bool genNewLineC = false;

  for(int i = 1; i < boardSize + 1; i++) {
    for(int j = 1; j < boardSize + 1; j++) { 
      if(i % cellSize == 0) {

        std::cout << "---";
        genNewLineC = true;

      } else {

        genNewLineP = genNewLineC;
        genNewLineC = false;

        if(genNewLineC == false && genNewLineP == true) {
          movesX++;
        }

        if(j % cellSize == 0) {

          std::cout << " | ";
          movesY++;

        } else {

          if((j - cellSize) % cellSize == 0) {
            std::cout << "   ";

          } else {

            std::cout << this->moves[movesX][movesY]; 
          }
        }
      } 
    }
    std::cout << std::endl;
    movesY = 0; 
  }
}


