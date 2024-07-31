#include <iostream>
#include <unistd.h>
int main()
{
    int computer, user;
    srand(time(0));
    do
    {
        system("cls");
        std::cout << "\tEnter Number: ";
        std::cin >> user;
        computer = 1 + rand() % 50;
        std::cout << "\t" << computer << std::endl;
        sleep(1);
    } while (computer != user);
    std::cout << "\tYou Won the Game!\n";
    return 0;
}
