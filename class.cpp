#include <iostream>

class Student
{
private:
    std::string name;
    int id;
    std::string department;

public:
    Student() {}

public:
    Student(std::string name, int id, std::string department): name(name), id(id), department(department) // constructor initializer list
    {
        // // this->name = name;
        // // this->id = id;
        // // this->department = department;
        // this->setName(name); // both approaches are okay
        // this->setId(id);
        // this->setDepartment(department);
    }

public:
    void setName(std::string name)
    {
        this->name = name;
    }

    void setId(int id)
    {
        this->id = id;
    }
    void setDepartment(std::string department)
    {
        this->department = department;
    }

    std::string getName()
    {
        return this->name;
    }

    int getId()
    {
        return this->id;
    }

    std::string getDepartment()
    {
        return this->department;
    }
};

class TeacherAssistant : public Student // has to be public otherwise inheritance will be private
{
private:
    int salary;

public:
    TeacherAssistant(std::string name, int id, std::string department, int salary): Student(name, id, department), salary(salary)
    {
        // this->setName(name);
        // this->setId(id);
        // this->setDepartment(department);
        // this->setSalary(salary);
    }

public:
    void setSalary(int salary)
    {
        this->salary = salary;
    }

    int getSalary(){
        return this->salary;
    }
};

int main()
{
    Student ss("Naavid Morshed", 18201196, "CSE");
    std::cout << ss.getName() << "\n";
    std::cout << ss.getId() << "\n";
    std::cout << ss.getDepartment() << "\n\n";

    TeacherAssistant dd("Generic TA", 10001000, "CSE", 9000);
    std::cout << dd.getName() << "\n";
    std::cout << dd.getId() << "\n";
    std::cout << dd.getDepartment() << "\n";
    std::cout << dd.getSalary() << std::endl;
}