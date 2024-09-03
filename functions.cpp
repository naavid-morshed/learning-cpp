#include <iostream>

int doubler(int num) {
    return num * 2;
}

void printer(std::string name) {
    std::cout << "You've entered : " << name << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    std::cout << "Result : " << doubler(num) << std::endl;

    std::string name;
    std::cout << "Enter a name : ";
    std::cin >> name;
    printer(name);
}