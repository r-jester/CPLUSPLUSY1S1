#include <iostream>
// User Input
int main(){

    std::string name;
    int age;
    std::string determine;

    std::cout << "How old are you?: ";
    
    std::cin >> age;
    
    std::cout << "What's your fullname?: ";

    std::getline(std::cin >> std::ws , name);

    if( age < 2) {
        determine = " year old";
    }
    else {
        determine = " years old";
    }

    std::cout << "Hello " << name << '\n';

    std::cout << "You are " << age << determine << '\n';

    return 0;
}