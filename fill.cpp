#include <iostream>

int main()
{
    const int SIZE = 15;
    std::string arr[SIZE];

    fill(arr, arr + SIZE/2, "Naavid");
    fill(arr + SIZE/2, arr + SIZE, "Morshed");


    for (auto item : arr)
    {
        std::cout << item << std::endl;
    }
}