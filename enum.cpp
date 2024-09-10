#include <iostream>

enum Weekdays
{
    saturday,
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday
};

/*
enum Weekdays
{
    saturday = 0,
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6
};
*/

int main()
{
    Weekdays today = tuesday;

    switch (today)
    {
    case saturday:
        std::cout << today << std::endl;
        break;
    case sunday:
        std::cout << today << std::endl;
        break;
    case monday:
        std::cout << today << std::endl;
        break;
    case tuesday:
        std::cout << today << std::endl;
        break;
    case wednesday:
        std::cout << today << std::endl;
        break;
    case thursday:
        std::cout << today << std::endl;
        break;
    case friday:
        std::cout << today << std::endl;
        break;
    default:
        std::cout << "Something went wrong" << std::endl;
        break;
    }

    for (int i = saturday; i <= friday; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}