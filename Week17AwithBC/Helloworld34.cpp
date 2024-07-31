#include <iostream>
// Foreach loop
int main(){

    // std::string students[] = {"Jester", "Rakyruu", "Virak", "DogMan"};
    int grades[] = {11, 22, 33, 44, 55};

    for(int x : grades){
        std::cout << x << '\n';
    }

    return 0;
}