#include <iostream>
// Switch
int main()
{

    // int month;

    // std::cout << "Enter the month(1-12): ";
    // std::cin >> month;

    // switch(month){
    //     case 1:
    //     std::cout << "It is January";
    //         break;
    //     case 2:
    //     std::cout << "It is February";
    //         break;
    //     case 3:
    //     std::cout << "It is March";
    //         break;
    //     case 4:
    //     std::cout << "It is April";
    //         break;
    //     case 5:
    //     std::cout << "It is May";
    //         break;
    //     case 6:
    //     std::cout << "It is June";
    //         break;
    //     case 7:
    //     std::cout << "It is July";
    //         break;
    //     case 8:
    //     std::cout << "It is August";
    //         break;
    //     case 9:
    //     std::cout << "It is September";
    //         break;
    //     case 10:
    //     std::cout << "It is October";
    //         break;
    //     case 11:
    //     std::cout << "It is November";
    //         break;
    //     case 12:
    //     std::cout << "It is December";
    //         break;
    //     default:
    //     std::cout << "Please enter in only numbers (1-12)!";
    //         break;
    // }
    char grade;

    std::cout << "Enter Your Grade: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You did great!";
        break;
    case 'B':
        std::cout << "You did good!";
        break;
    case 'C':
        std::cout << "You did okay!";
        break;
    case 'D':
        std::cout << "You did normal!";
        break;
    case 'E':
        std::cout << "You did almost bad!";
        break;
    case 'F':
        std::cout << "You FAILED!";
        break;
    default:
        std::cout << "Please Only Enter in a letter grade (A-F)";
        break;
    }

    return 0;
}