#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number : ";
    std::cin >> num;

    switch (num)
    {
    case 1:
        std::cout << num << std::endl;
        break;
    case 2:
        std::cout << num << std::endl;
        break;
    default:
        std::cout << num << std::endl;
        break;
    }

}