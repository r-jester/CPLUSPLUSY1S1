#include <iostream>
// Type Conversion
int main(){

    /*
    double x = (int) 3.14;
    // char y = 100;

    std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << (char) 100 << '\n';
    std::cout << char (100) << '\n';
    */
   int correct = 8;
   int questions = 10;
   double score = correct / (double) questions * 100;
   
   std::cout << score << " %";

    return 0;
}