#include <iostream>
// User defined functions

void happyBirthday(std::string name, int age);

int main(){

    std::string name = "Jester";
    int age = 19;

    happyBirthday(name, age);

    return 0;
}
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You're " << age << " Years old" << "\n";
}