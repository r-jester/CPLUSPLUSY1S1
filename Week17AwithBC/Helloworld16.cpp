#include <iostream>
// Useful string methods in c++
int main(){

    std::string name;

    std::cout << "Enter Your name: ";
    std::getline(std::cin, name);

    // if(name.length() > 12){
    //     std::cout << "Your name can't be over 12 characters\n";
    // }
    // else{
    //     std::cout << "Welcome " << name << std::endl;
    // }

    // if(name.empty()){
    //     std::cout << "You didn't enter your name";
    // }
    // else{
    //     std::cout << "Hello " << name;
    // }

    // name.clear();

    // std::cout << "Hello " << name;

    // name.append("@gmail.com");

    // std::cout << "Your username is " << name;

    // std::cout << name.at(0);

    // name.insert(0, "@");

    // std::cout << name;

    // std::cout << name.find(' ');

    name.erase(0, 3);

    std::cout << name;

    return 0;
}