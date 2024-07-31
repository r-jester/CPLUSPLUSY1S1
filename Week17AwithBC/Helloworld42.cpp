#include <iostream>
// Memory Addresses
int main(){

    std::string name = "Jester";
    int age = 19;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}