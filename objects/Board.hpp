#pragma once
#include <iostream>
#include <string>

class Board {
private:
  int size;

public:
  std::string moves[3][3];
  Board nested[9];
  
  Board(int s);
  void drawBoard();
  void win();
  void checkWin();
  void subdivide();

};
