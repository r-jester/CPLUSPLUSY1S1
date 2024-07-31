#include <iostream>
// Return Keyword

double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);
int main(){

    std::string Firstname = "My";
    std::string Lastname = "Jester";
    std::string Fullname = concatStrings(Firstname, Lastname);
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << " cm^2" << std::endl;
    std::cout << "Volume: " << volume << " cm^3" << std::endl;
    std::cout << "My Fullname: " << Fullname << '\n';
    
    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}