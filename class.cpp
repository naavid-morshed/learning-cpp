#include <iostream>

class Student
{
private:
    std::string name;
    int id;
    std::string department;

public:
    Student(std::string name, int id, std::string department)
    {
        // this->name = name;
        // this->id = id;
        // this->department = department;
        this->setName(name); // both approaches are okay
        this->setId(id);
        this->setDepartment(department);
    }

public:
    void setName(std::string name)
    {
        this->name = name;
    }

public:
    void setId(int id)
    {
        this->id = id;
    }

public:
    void setDepartment(std::string department)
    {
        this->department = department;
    }

public:
    std::string getName()
    {
        return this->name;
    }

public:
    int getId()
    {
        return this->id;
    }

public:
    std::string getDepartment()
    {
        return this->department;
    }
};

int main()
{
    Student ss("Naavid Morshed", 18201196, "CSE");
    std::cout << ss.getName() << std::endl;
    std::cout << ss.getId() << std::endl;
    std::cout << ss.getDepartment() << std::endl;
}