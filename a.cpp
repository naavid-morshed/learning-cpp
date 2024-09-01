#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    const int sum = a + b;
    std::cout << sum << std::endl;
    return 0;
}
