#include <iostream>
#include <cmath>

int main() {
    std::cout << pow(2, 3) << std::endl;
    std::cout << sqrt(9) << std::endl;
    std::cout << std::max(2 ,3) << std::endl;
    std::cout << std::min(2 ,3) << std::endl;
    std::cout << round(5.5) << std::endl;

    bool hungry = true;

    std::cout << (hungry ? "You are hungry" : "You are Full") << std::endl;
}