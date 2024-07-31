#include <iostream>
// Const Parameters
void printInfo(const std::string name, const int age);
int main()
{

    std::string name = "Jeter";
    int age = 19;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string name, const int age)
{

    std::cout << name << '\n';
    std::cout << age << '\n';
}