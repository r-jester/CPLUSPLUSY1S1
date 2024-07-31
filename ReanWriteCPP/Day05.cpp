#include <iostream>
#include <fstream>
using namespace std;
int main(){
	system("cls");
	
	fstream file("text.txt", ios::app);
	
	int num = 0;
	while(num < 2){
		std::cout << "What do you want to write to text file? : ";
		std::string sth;
		std::getline(std::cin, sth);
		file << sth << '\n';
		num ++;
	}
	file.close();
	std::cout << "Read file\n";
	std::string read;
	fstream ifs("text.txt", ios::in);
	while(getline(ifs, read)){
		std::cout << read << '\n';
	}
	
	return 0;
}
