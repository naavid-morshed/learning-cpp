#include <iostream>

int main()
{
    int numArr[] = {2, 6, 3, 1, 9, 5, 4, 10, 8, 8, 7};
    int numArrLength = sizeof(numArr) / sizeof(int);

    // low to high
    for (int index1; index1 < numArrLength; ++index1)
    {
        for (int index2 = index1; index2 < numArrLength; ++index2)
        {
            if (numArr[index1] > numArr[index2])
            {
                int temp;
                temp = numArr[index1];
                numArr[index1] = numArr[index2];
                numArr[index2] = temp;
            }
        }
    }

    for (int i = 0; i < numArrLength; i++)
    {
        std::cout << numArr[i] << ((i + 1 != numArrLength) ? ", " : ".");
    }
    std::cout << std::endl;

    // high to low
    for (int index1; index1 < numArrLength; index1++)
    {
        for (int index2 = index1; index2 < numArrLength; index2++)
        {
            if (numArr[index1] < numArr[index2])
            {
                int temp;
                temp = numArr[index1];
                numArr[index1] = numArr[index2];
                numArr[index2] = temp;
            }
        }
    }

    for (int i = 0; i < numArrLength; i++)
    {
        std::cout << numArr[i] << ((i + 1 != numArrLength) ? ", " : ".");
    }
    std::cout << std::endl;
}