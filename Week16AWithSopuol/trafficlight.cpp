#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <iomanip>
void trafficLight();
int main(){
    trafficLight();
    return 0;
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