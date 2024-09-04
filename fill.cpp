#include <iostream>

int main()
{
    std::string arr[100];

    fill(arr, arr + 100, "Naavid");

    for (auto item : arr)
    {
        std::cout << item << std::endl;
    }
}