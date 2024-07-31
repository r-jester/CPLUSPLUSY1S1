#include <iostream>
// Fill an array with user input
int main(){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0 ; i < size ; i++){
        std::cout << "Enter a food you like or 'Q' to Quit #" << i + 1 << ": ";
        std::getline(std::cin >> std::ws , temp);

        if(temp == "q" or temp == "Q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    for(int i = 0 ;!foods[i].empty(); i++){
        std::cout << foods[i] << "\n";
    }

    return 0;
}