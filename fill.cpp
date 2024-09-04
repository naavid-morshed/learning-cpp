#include <iostream>

int main()
{
    const int SIZE = 15;
    std::string arr[SIZE];

    fill(arr, arr + SIZE / 3, "A");
    fill(arr + SIZE / 3, arr + (SIZE / 3) * 2, "B");
    fill(arr + (SIZE / 3) * 2, arr + SIZE, "C");

    for (auto item : arr)
    {
        std::cout << item << std::endl;
    }
}