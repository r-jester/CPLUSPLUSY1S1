#include <iostream>
// Variables and basic data types
int main(){
    
    int x; // declaration
    x = 5; // assignment
    int y = 6;
    int sum = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // integer (whole number)
    int age = 19;
    int year = 2023;
    int Day = 7.5;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;  

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (object that represents a sequence of text)
    std::string name = "Jester";
    std::string day = "Thursday";
    std::string food = "Pizza";
    std::string address = "123 fake str";

    std::cout << day << '\n';
    std::cout << price << '\n';
    std::cout << currency << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " Years old" << '\n';
    std::cout << "Your Address is " << address << '\n';

    return 0;
}