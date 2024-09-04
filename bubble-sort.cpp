#include <iostream>

int main()
{
    int numArr[] = {2, 6, 3, 1, 9, 5, 4, 10, 8, 8, 7};
    int size = sizeof(numArr) / sizeof(int);

    // low to high
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (numArr[j] > numArr[j + 1])
            {
                const int temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << numArr[i] << ((i + 1 != size) ? ", " : ".");
    }
    std::cout << std::endl;

    // high to low
    for (int index1; index1 < size; index1++)
    {
        for (int index2 = index1; index2 < size; index2++)
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

    for (int i = 0; i < size; i++)
    {
        std::cout << numArr[i] << ((i + 1 != size) ? ", " : ".");
    }
    std::cout << std::endl;
}