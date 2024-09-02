#include <iostream>

int main() {
    srand(time(NULL)); // srand => random number generator 
    // time(null) => current calendar time as number, this will be used as seed

    int num = (rand() % 2) + 1;
    
    std::cout << time(0) << std::endl;

    std::cout << time(0) << std::endl;
    std::cout << time(NULL) << std::endl;
}