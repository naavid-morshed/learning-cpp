#include <iostream>

int main()
{
    int ticTacToeBoard[3][3];
    int boardRowSize = sizeof(ticTacToeBoard) / sizeof(ticTacToeBoard[0]);
    int boardColSize = sizeof(ticTacToeBoard[0]) / sizeof(ticTacToeBoard[0][0]);

    for (int i = 0; i < boardRowSize; i++)
    {
        for (int j = 0; j < boardColSize; j++)
        {
            ticTacToeBoard[i][j] = -1;
        }
    }

    for (int i = 0; i < boardRowSize; i++)
    {
        for (int j = 0; j < boardColSize; j++)
        {
            std::cout << ticTacToeBoard[i][j];
        }
        std::cout << std::endl;
    }

    // tired of making tictactoe over and again, will make later
}