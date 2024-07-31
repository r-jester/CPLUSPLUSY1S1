#include <iostream>
#include <cmath>
// Hypotenuse calculator practice program
int main(){

    double a; 
    double b;
    double c;

    std::cout << "Enter size a: ";
    std::cin >> a;

    std::cout << "Enter size b: ";
    std::cin >> b;

    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Size C: " << c << std::endl;

    return 0;
}