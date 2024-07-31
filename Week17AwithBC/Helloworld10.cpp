#include <iostream>
// if statement
int main(){

    int age;

    std::cout << "Enter Your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You're too old to enter this site!";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if(age < 0){
        std::cout << "You haven't born yet!";
    }
    else{
        std::cout << "You're not old enough to enter!";
    }

    return 0;
}