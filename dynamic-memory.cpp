#include <iostream>

int main()
{
    int *pNum = nullptr;
    pNum = new int;
    *pNum = 5;
    std::cout << "Address : " << pNum << std::endl;
    std::cout << "Value : " << *pNum << std::endl;
    delete pNum;

    int count;
    std::cout << "How many strings you want to store? : ";
    std::cin >> count;
    std::cout << std::endl;

    std::string* nameArr = new std::string[count];

    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter String no " << i + 1 << " : ";
        std::getline(std::cin >> std::ws, nameArr[i]);
    }
    std::cout << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cout << (nameArr[i].empty() ? "null" : nameArr[i]) << std::endl;
    }

    delete[] nameArr;
}