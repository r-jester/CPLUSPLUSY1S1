#include <iostream>
// Fill() Function
int main(){

    const int SIZE = 99;
    std::string foods[SIZE];
//  fill(begin, end, value)
    fill(foods , foods + (SIZE/3) , "Pizza");
    fill(foods + (SIZE/3) , foods + (SIZE/3)*2 , "Hamburger");
    fill(foods + (SIZE/3)*2 , foods + SIZE , "Hotdog");
    
    for(std::string food : foods){
        std::cout << food << "\n";
    } 

    return 0;
}