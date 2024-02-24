#include <iostream>
#include <string>

void drawBoard(int squareSize) {
    // Calculate the number of characters for each row and column
    int cellSize = squareSize + 1; // Each cell consists of the square and a border
    int boardSize = 3 * cellSize - 1; // The whole board size

    // Draw the board
    for (int i = 1; i < boardSize + 1; ++i) {
        for (int j = 1; j < boardSize; ++j) {
            // Draw horizontal lines
            if (i % cellSize == 0) {
                std::cout << "---";
            } else {
                // Draw vertical lines
                if (j % cellSize == 0) {
                    std::cout << "|";
                } else {
                    // Draw the square's interior
                    std::cout << "   ";
                }
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int squareSize;
    std::cout << "Enter the size of each square: ";
    std::cin >> squareSize;

    drawBoard(squareSize);

    return 0;
}

