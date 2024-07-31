
#include <iostream>
#include <unistd.h>
#include <iomanip>

int main(){
	while (true){
		system("cls");
		system("color 4");
		std::cout << std::setw(60) << char(219);
		sleep(1);
		for (int i = 5; i >= 0 ; i--){
			if (i < 10){
				std::cout << "\r" << std::setw(60) << ">>>|"<< i << "|<<<" <<" ";
			}
			else {
				std::cout << "\r" << std::setw(60) << ">>>|"<< i << "|<<<";
			}
			sleep(1);
		}

		system("cls");
		system("color 2");
		std::cout << std::setw(60) << char(219);
		sleep(1);
		for (int i = 5; i >= 0 ; i--){
			if (i < 10){
				std::cout << "\r" << std::setw(60) << ">>>|"<< i << "|<<<" <<" ";
			}
			else {
				std::cout << "\r" << std::setw(60) << ">>>|"<< i << "|<<<";
			}
			sleep(1);
		}

		system("cls");
		system("color 6");
		std::cout << std::setw(60) << char(219);
		sleep(1);
		for (int i = 5; i >= 0 ; i--){
			if (i < 10){
				std::cout << "\r" << std::setw(60) << ">>>|"<< i << "|<<<" <<" ";
			}
			else {
				std::cout << "\r" << std::setw(60) << ">>>|"<< i << "|<<<";
			}
			sleep(1);
		}
	}
	return 0;
}
