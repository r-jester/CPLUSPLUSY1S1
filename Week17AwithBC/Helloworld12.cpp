#include <iostream>
// console calculator program
int main()
{

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";

    std::cout << "Enter Number 1: ";
    std::cin >> num1;

    std::cout << "Enter operator (+ , - , * , /): ";
    std::cin >> op;

    std::cout << "Enter Number 2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        std::cout << "That wasn't a valid response\n";
        break;
    }

    std::cout << "The result of " << num1 << " " << op << " " << num2 << " is: " << result << std::endl;

    std::cout << "**********************************\n";

    return 0;
}