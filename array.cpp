#include <iostream>

int getTotal(int arr[], int arrLength);

int main()
{
    int numbers[] = {
        1,
        2,
        3,
        4,
        5,
    };
    
    std::cout << "Total is : " << getTotal(numbers, sizeof(numbers) / sizeof(int)) << std::endl;
}

int getTotal(int arr[], int arrLength)
{
    int total = 0;

    for (int i = 0; i < arrLength; i++)
    {
        total += arr[i];
    }

    return total;
}
