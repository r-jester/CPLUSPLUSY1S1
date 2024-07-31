#include <iostream>
#include <string>

int main() {
    system("cls");
    char name;
    std::string fullname;
    int age;
    std::cout << "Enter Your Name: ";
    std::cin >> name;
    while (getchar()!= '\n');
    std::cout << "Enter Your Age: ";
    std::cin >> age;
    std::cout << "Enter Your Full Name: ";
    std::cin.ignore();
    std::getline(std::cin , fullname);
    system("cls");
    std::cout << "Name: " << name;
    std::cout << std::endl;
    std::cout << "Age: " << age;
    std::cout << std::endl;
    std::cout << "Your Fullname: " << fullname;
    return 0;
}
