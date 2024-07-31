#include <iostream>
// Variable scope
// :: is Global Scope

int myNum = 3; // Global Variable

void printNum();

int main(){

    int myNum = 1; // Local Variable

    printNum();
    std::cout << ::myNum << "\n";

    return 0;
}
void printNum(){
    int myNum = 2;// Local Variable
    std::cout << ::myNum << "\n";
}