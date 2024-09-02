#include <iostream>

int main() {
    std::string name;
    name = "Naavid";

    std::cout << name << std::endl;

    name.clear();

    std::cout << name << std::endl;

    name.append("Naavid");

    std::cout << name << std::endl;

    name.clear();
    name.insert(0, "Naavid");
    std::cout << name << std::endl;

    if (name.find("aa")) {
        std::cout << name.at(4) << std::endl;
    } else {
        std::cout << name << std::endl;
    }

}