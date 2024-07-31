#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <unistd.h>

void threeDarray(){
    int arr[3][1][2]= {{{1,2}},{{3,4}},{{5,6}}};
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 1 ; j++){
            for(int k = 0 ; k < 2 ; k++){
                std::cout << arr[i][j][k] << std::endl;
            }
        }
    }
}

void trafficLight(){
    while (true){
        system("cls");
        system("color 2");
        std::cout << std::setw(50) << char(223) << char(223);
        Sleep(200);
        for (int i = 10; i > 0; i--){
            std::cout << "\r" << std::setw(50) << "===>>||" << i << "||<<===";
            sleep(1);
        }
        system("cls");
        system("color 6");
        std::cout << std::setw(50) << char(223) << char(223);
        Sleep(200);
        for (int i = 10; i > 0; i--){
            std::cout << "\r" << std::setw(50) << "===>>||" << i << "||<<===";
            sleep(1);
        }
        system("cls");
        system("color 4");
        std::cout << std::setw(50) << char(223) << char(223);
        Sleep(200);
        for (int i = 10; i > 0; i--){
            std::cout << "\r" << std::setw(50) << "===>>||" << i << "||<<===";
            sleep(1);
        }
    }
}

int abs(int x){
    if (x < 0){
        return -1*x;
    }
    else{
        return x;
    }
}

std::string fullname(std::string a, std::string b)
{
    std::string fullname = a + " " + b;
    return fullname;
}

int sum(int x , int y){
    int c = x + y;
    return c;
}

int max(int x , int y){
    if( x > y ){
        return x;
    }
    return y;
}

int max(int x , int y , int z){
    if( x > y && x > z){
        return x;
    }
    else if( y > x && y > z){
        return y;
    }
    return z;
}

int min(int x , int y){
    if( x < y ){
        return x;
    }
    return y;
}

int min(int x , int y , int z){
    if( x < y && x < z){
        return x;
    }
    else if( y < x && y < z){
        return y;
    }
    return z;
}

double addition(double a, double b){
    double c = a + b;
    return c;
}

double subtraction(double a, double b){
    double c = a - b;
    return c;
}

double multiplication(double a, double b){
    double c = a * b;
    return c;
}

double division(double a, double b){
    double c = a / b;
    return c;
}

int factorial(int x){
    if(x == 1){
        return 1;
    }
    return x * factorial(x - 1);
}

void login()
{
    int again = 0;
login:
    do
    {
        std::string un, pass;
        system("color 7");
        std::cout << "\n****** Login ******\n";
        std::cout << "Enter Username: ";
        std::cin.ignore();std::getline(std::cin, un);
        std::cout << "Enter Password: ";
        std::cin.ignore();std::getline(std::cin, pass);
        if (un == "Jester" && pass == "1111")
        {
            std::cout << "Loading.";
            for (int i = 0; i < 20; i++)
            {
                std::cout << ".";
                system("color 2");
                usleep(10000);
            }
            system("cls");
            std::cout << "\nWelcome to the system!\n";
            break;
        }
        else
        {
            std::cout << "Loading.";
            for (int i = 0; i < 20; i++)
            {
                std::cout << ".";
                system("color 4");
                usleep(10000);
            }
            system("cls");
            std::cout << "\nPlease Try Again!\n";
        }
        again++;
    } while (again < 3);
    if (again > 2)
    {
        system("cls");
        for (int i = 10; i >= 0; i--)
        {
            if (i < 10)
            {
                std::cout << "\rPlease Try Again in " << i << " ";
            }
            else
            {
                std::cout << "\rPlease Try Again in " << i;
            }
            system("color 4");
            sleep(1);
        }
        system("cls");
        again--;
        goto login;
    }
}

void PIN()
{
    int pin, pinagain = 0;
    do
    {
    Confirm:
        system("color 7");
        std::cout << "\n***** Confirm PIN *****\n";
        std::cout << "Enter PIN: ";
        std::cin >> pin;
        if (pin == 2222)
        {
            std::cout << "Loading.";
            for (int a = 0; a < 20; a++)
            {
                std::cout << ".";
                system("color 2");
                usleep(10000);
            }
            system("cls");
            std::cout << "\nVerified\n";
            break;
        }
        else
        {
            std::cout << "Loading.";
            for (int a = 0; a < 20; a++)
            {
                std::cout << ".";
                system("color 4");
                usleep(10000);
            }
            system("cls");
            std::cout << "\nNo Response\n";
        }
        pinagain++;
    } while (pinagain < 3);
    if (pinagain > 2)
    {
        while (true)
        {
            system("cls");
            system("color 7");
            std::string dob, tel, email, end;
            std::cout << "Press Enter to Try Another Way or Exit to Close Program: ";
            std::cin.ignore();
            std::getline(std::cin, end);
            if (end == "Exit" || end == "exit")
            {
                for (int i = 0; i <= 100; i++)
                {
                    system("color 6");
                    std::cout << "\rShutdown " << i << "%";
                    usleep(1000);
                }
                system("cls");
                break;
            }
            std::cout << "Complete Your Information to Receive Your PIN Code!\n";
            std::cout << "Enter Your Phone Number: ";
            std::cin.ignore();
            std::getline(std::cin, tel);
            std::cout << "Enter Your Date of Birth: ";
            std::cin.ignore();
            std::getline(std::cin, dob);
            std::cout << "Enter Your Email Address: ";
            std::cin.ignore();
            std::getline(std::cin, email);
            system("cls");
            std::cout << "Your PIN is: 2222" << '\n';
            pinagain--;
            goto Confirm;
        }
    }
}
int count(int x){
    if(x == 0){
        return 0;
    }
/*  10
    9
    8
    7
    6
    5
    4
    3
    2
    1 */
    count(x-1);
    std::cout << x << " ";
    return 0;
}
int main(){
    system("cls");
    PIN();
    return 0;
}




