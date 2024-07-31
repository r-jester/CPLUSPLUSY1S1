#include <iostream>
// Sizeof() operator
int main(){

    std::string name = "Jester";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Jester", "Rakyruu", "Virak"};

    std::cout << sizeof(std::string) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";
    std::cout << sizeof(char) << " bytes\n";
    std::cout << sizeof(bool) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}