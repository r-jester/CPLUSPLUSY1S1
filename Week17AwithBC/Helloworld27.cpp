#include <iostream>
// Overloaded Functions
void bakePizza();
void bakePizza(std::string pizza);
void bakePizza(std::string pizza1, std::string pizza2);
int main(){

    // bakePizza();
    // bakePizza("Jester");
    bakePizza("Jester", "Rakyruu");
    
    return 0;
}
void bakePizza(){
    std::cout << "Here is your Pizza!\n";
}
void bakePizza(std::string pizza){
    std::cout << "Here is your " << pizza << " Pizza!" << '\n';
}
void bakePizza(std::string pizza1, std::string pizza2){
    std::cout << "Here is your " << pizza1 << " and " << pizza2 << " Pizza!" << '\n';
}