#include <iostream>
class Car{
public:
	std::string model;
	std::string color;
	int year;
	Car(std::string x, std::string y, int z){
		model = x;
		color = y;
		year = z;
	}
	void carInfo(){
		std::cout << "********** Car Info **********\n";
		std::cout << "Model: " << model << std::endl;
		std::cout << "Color: " << color << std::endl;
		std::cout << "Year : " << year << std::endl;
		std::cout << "******************************\n";
	}
};

int main() {
	system("cls");
	// Virak model
	Car Virak("Virak Pro 2024","Black",2024);
	// Ranger model
	Car Ranger("Ranger 2020","Red",2020);
	// Show Result
	Virak.carInfo();
	Ranger.carInfo();
	
    return 0;
    
}