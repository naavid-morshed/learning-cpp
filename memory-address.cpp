#include <iostream>

void swap(int &a, int &b);

int main()
{
    //    std::string name = "jon";
    //    char c = '1';
    //    const int num = 6;

    //    std::cout << &name << "\n";
    //    std::cout << (void *) &c << std::endl;
    // //    std::cout << &c << std::endl;
    //    std::cout << &num << "\n";

    int x = 5;
    int y = 10;

    std::cout << x << "\n"
              << y << "\n\n";

    swap(x, y);

    std::cout << x << "\n"
              << y << "\n"
              << std::endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}