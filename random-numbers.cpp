#include <iostream>

int main() {
    srand(time(0)); // srand => random number generator 
    // time(null) => current calendar time as number, this will be used as seed

    int num = (rand() % 2) + 1;

    std::cout << num << std::endl;

    std::cout << time(0) << std::endl;
    std::cout << time(NULL) << std::endl;
}