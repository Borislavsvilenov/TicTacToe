#pragma once
#include <iostream>
#include <string>

class Board {
private:
  int size;
  bool subDivided;

public:
  std::string moves[3][3];
  Board *nested[3][3];
  
  Board(int s);
  void drawBoard();
  void win();
  void checkWin();
  void subDivide();

};
