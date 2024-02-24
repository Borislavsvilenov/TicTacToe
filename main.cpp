#include <iostream>
#include <string>
#include <vector>

void drawBoard(int squareSize, std::vector<char> &plays) {
  int cellSize = squareSize + 1; 
  int boardSize = 3 * cellSize - 1;

  for (int i = 1; i < boardSize + 1; ++i) {
    for (int j = 1; j < boardSize + 1; ++j) {
      if (i % cellSize == 0) {
        std::cout << "---";
      } else {
        if (j % cellSize == 0) {
          std::cout << " | ";
        } else {
          std::cout << "   ";
        }
      }
    }
    std::cout << std::endl;
  }
}

int main() {
    int squareSize;
    std::vector<char> plays;
    std::cout << "Enter the size of each square: ";
    std::cin >> squareSize;

    drawBoard(squareSize, plays);

    return 0;
}

