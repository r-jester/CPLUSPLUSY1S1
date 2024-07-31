#include <iostream>

int main(){
	system("cls");
	int type;
	std::cout << "Hello World Start\n";
	do {
		std::cout << "====>> Staff Job Position <<====" << std::endl;
		std::cout << "1.Manager" << std::endl;
		std::cout << "2.Receptionist" << std::endl;
		std::cout << "\nWhat type of User do you want to create?" << std::endl;
		std::cout << "Tip : Please Enter the Number!!!" << std::endl;
		std::cout << "--> ";
		std::cin >> type;
	} while (type != 1 && type != 2);
	std::cout << "Hello World End\n";
	return 0;
}
