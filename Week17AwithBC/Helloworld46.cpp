#include <iostream>
// Pointers
int main(){

    std::string name = "Jester";
    int age = 19;
    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';

    return 0;
}