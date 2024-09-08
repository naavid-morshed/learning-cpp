#include <iostream>

int main()
{
    // [row][col]
    // col must be specified, row specification is optional unless not assigned during declaration
    std::string arr[][3] = {
        {"A", "B", "C"},
        {"D", "E", "F"},
        {"G", "H", "I"},
        {"J", "K", "L"},
    };

    int rowSize = sizeof(arr) / sizeof(arr[0]);
    int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);

    std::cout << "Row count : " << rowSize << "\n";
    std::cout << "Col count : " << colSize << "\n";

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << std::endl;
}