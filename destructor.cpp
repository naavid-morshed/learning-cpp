#include <iostream>

class A
{
private:
    std::string name;

public:
    A(std::string name) : name(name)
    {
        std::cout << "Constructor initialized" << std::endl;
    }
    ~A()
    {
        std::cout << name << " Destroyed" << std::endl;
    }
};

int main()
{
    A a("Morshed");
    a.~A();
}