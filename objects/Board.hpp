#pragma once
#include <iostream>
#include <string>

class Board {
private:
  int size;
  std::string moves[3][3];

public:
  Board(int s);
  void drawBoard();

};
