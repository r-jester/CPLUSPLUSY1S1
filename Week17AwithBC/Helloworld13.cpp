#include <iostream>
// Ternary operator
int main(){

    int grade = 75;
    // if(grade >= 60){
    //     std::cout << "You Passed!";
    // }
    // else{
    //     std::cout << "You Failed!";
    // }
    //grade >= 60 ? std::cout << "You Passed!" : std::cout << "You Failed!";
    
    // int number = 9;
    // number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    // int number = 8;
    // number % 2 ? std::cout << "ODD" : std::cout << "EVEN";
    //           True = 1             False = 0
    bool hungry = true;
    
    //hungry ? std::cout << "You are Hungry" : std::cout << "You are Full";
    std::cout << (hungry ? "You are Hungry" : "You are Full");

    return 0;
}