#include <iostream>

int main()
{
    // char c = '1';
    // char *pC = &c;
    // std::cout << c << std::endl;
    // std::cout << pC << std::endl;

    std::string name = "Naavid Morshed";
    std::string *pName = &name;

    std::cout << pName << std::endl;

    int num = 5;
    int *pNum = &num;

    std::cout << &num << "\n";
    std::cout << pNum << std::endl;

    std::string arr[5] = {"A", "B", "F", "C", "E"};
    std::string *pArr = arr;

    std::cout << *pArr << std::endl; // first element is printed only

    std::string* pClientName = new std::string;
    *pClientName = "BRAC";
    std::cout << pClientName << std::endl;
    std::cout << *pClientName << std::endl;
    delete pClientName;
}