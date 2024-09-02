#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your full name : ";
    std::getline(std::cin, name);

    std::cout << "Your Name is : " << name << std::endl;
    
    return 0;
}