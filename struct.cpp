#include <iostream>

struct student
{
    std::string name;
    int id;
    std::string department;
    bool graduated = true; // default assignment
    // bool graduated;
};

int main()
{
    student std1;
    std1.name = "Naavid Morshed";
    std1.id = 18201196;
    std1.department = "CSE";
    std1.graduated = true;

    std::cout << std1.name << std::endl;
    std::cout << std1.graduated << std::endl;
}
