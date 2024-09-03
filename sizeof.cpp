#include <iostream>

int main()
{
    std::string a = "Naavid Morshed asdffffffffffffffffffffffffffffffffffffffffffffffffffffff";
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(a)/sizeof(char) << std::endl;
}