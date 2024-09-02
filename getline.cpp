#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your age : ";
    std::cin >> age; // cin puts a white space character after taking input, 
    // it needs to be expelled otherwise it will be taken as input by getline

    std::cout << "Enter your full name : ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello : " << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}