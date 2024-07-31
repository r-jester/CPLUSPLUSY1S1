#include <iostream>
#include <vector>

// TypeDef and type aliases
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

using text_t = std::string;
typedef int number_t;

int main(){

    text_t firstName = "Jester";
    number_t age = 19;

    std::cout << "You're " << firstName << '\n';
    std::cout << "You're " << age << '\n';

    return 0;
}