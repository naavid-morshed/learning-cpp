#include <iostream>

int main()
{
    std::string a[] = {"Naavid Morshed", "Tafsir", "Harun", "Turjo"};
    std::string b = "Naavid";
    int c = 55;

    std::cout << sizeof(c) / sizeof(int) << std::endl;
    std::cout << b.length() << std::endl;
    std::cout << sizeof(a) / sizeof(std::string) << std::endl;
}