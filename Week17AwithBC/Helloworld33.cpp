#include <iostream>
// Iterate over an array
int main(){

    // std::string students[] = {"Jester", "Rakyruu", "Virak", "DogMan"};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    for(int i = 0 ; i < sizeof(grades)/sizeof(char) ; i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}