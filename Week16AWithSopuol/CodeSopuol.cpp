#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <unistd.h>

void Login();
std::string Menu(int Menu_type);
std::string Coffee(int Menu_choice);
std::string Drinks(int Menu_choice);
float Prices(std::string Product);

double discount(int Quantity,float Price){
    if (Quantity >= 5){
        return Price * 0.5;
    }
    return 0;
}

void Recipt(std::string Menu_result, std::string Product, int Quantity, char Size , int Sugar,float Price,double Discount, int seatnumber){
    std::cout << "Type: " << Menu_result << std::endl;
    std::cout << "Name of the " << Menu_result << ": " << Product << std::endl;
    std::cout << "Quantity: " << Quantity << std::endl;
    if (Menu_result != "Alcohol"){
        std::cout << "Size: " << Size << std::endl;
    }
    if (Menu_result == "Hot Coffee" || Menu_result == "Ice Coffee"){
        std::cout << "Sugar: " << Sugar << " %" << std::endl;
    }
    std::cout << "Original Price: " << Price << " $" << std::endl;
    if (Quantity >= 5){
        std::cout << "Discount(50%): " << Discount << " $"<< std::endl;
    }
    std::cout << "Your seat number is: " << seatnumber << std::endl;
    std::cout << "Total amount to pay in KHR: " << std::fixed << std::showpoint << std::setprecision(2) << (Price - Discount) * 4000 << " KHR" << std::endl;
    std::cout << "Total amount to pay in Dollar: " << std::fixed << std::showpoint << std::setprecision(2) << (Price - Discount) << " $" << std::endl;
}

int main(){
    int Menu_type, Menu_choice, Sugar, Quantity;
    double Discount;
    double Price;
    char Size;
    int seatnumber = 1;
    std::string Product, last;

    Login();
    while (true){
        system("cls");
        while (true){
            std::cout << "Please Choose your Menu type!" << std::endl;
            std::cout << "1.Coffee\n2.Drinks" << std::endl;
            std::cout << "Choose: ";

            if (!(std::cin >> Menu_type)){
                system("cls");
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                continue;
            }
            switch (Menu_type){
                case 1:
                case 2:
                    break;
                default:
                    std::cout << "\nPlease enter only 1 or 2 !!!" << std::endl;
                    continue;
            }
            break;
        }

        std::string Menu_result = Menu(Menu_type);
        if (Menu_result == "Hot Coffee" || Menu_result == "Ice Coffee"){
            (Menu_result == "Hot Coffee") ? Menu_choice = 1 : Menu_choice = 2;
            Product = Coffee(Menu_choice);
            while (true){
                std::cout << "Enter amount of Sugar: ";
                if (!(std::cin >> Sugar)){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    continue;
                }
                if (Sugar > 100 || Sugar < 0){
                    std::cout << "\nSugar is can only be from 1 to 100" << std::endl;
                    continue;
                }
                break;
            }
        }
        else if (Menu_result == "Juice" || Menu_result == "Shake" || Menu_result == "Alcohol"){
            Menu_choice = (Menu_result == "Shake") ? 2 : 3;
            if (Menu_result == "Juice"){
                Menu_choice = 1;
            }
            Product = Drinks(Menu_choice);
        }
        float OriginalPrice = Prices(Product);
        do{
            std::cout << "\nEnter the Quantity: ";
            std::cin >> Quantity;
        } while (Quantity < 1);

        Price = (OriginalPrice * Quantity);
        if (Menu_result != "Alcohol"){
            do {
                std::cout << "\nPick the Size S = Small, M = Medium, L = Large\nEnter the Size: ";
                if (!(std::cin >> Size)){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                }
                switch (Size){
                    case 's':
                    case 'S':
                        Price = (OriginalPrice * Quantity) - (0.25 * Quantity);
                        break;
                    case 'm':
                    case 'M':
                        Price = (OriginalPrice * Quantity);
                        break;
                    case 'l':
                    case 'L':
                        Price = (OriginalPrice * Quantity) + (0.25 * Quantity);
                        break;
                    default:
                        system("cls");
                        std::cout << "Please enter only S/M/L !!!" << std::endl;
                }
            } while (Size != 'S' && Size != 'M' && Size != 'L' && Size != 's' && Size != 'm' && Size != 'l');
        }
        Discount = discount(Quantity, Price);
        system("cls");
        Recipt(Menu_result, Product, Quantity, Size , Sugar, Price, Discount, seatnumber);
        seatnumber += 1;
        std::cout << "Press enter to continue or Exit to stop: ";
        std::cin.ignore(); getline(std::cin,last);
        if (last == "Exit" or last == "exit"){
            system("cls");
            for (int i = 0; i <= 100; i++){
                std::cout << "\rShutdown " << i << "%";
                usleep(1000);
            }
            system("cls");
            break;
        }
    }
    return 0;
}

void Login(){
    while (true){
        std::string Username, Pass;
        system("cls");
        std::cout << "Enter Username: ";
        std::cin >> Username;
        std::cout << "Enter Password: ";
        std::cin >> Pass;
        if (Username == "group8" && Pass == "team8"){
            break;
        }
    }
}

std::string Menu(int Menu_type){
    int MenuChoice;
    system("cls");
    while (true){
        switch(Menu_type){ //Main Menu
            case 1:
                while (true){
                    std::cout << "Choose your's Coffee type" << std::endl;
                    std::cout << "Menu" << std::endl << "1.Hot Coffee\n2.Ice Coffee\nChoose: ";
                    if (!(std::cin >> MenuChoice)){
                        system("cls");
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        continue;
                    }
                    switch (MenuChoice){
                        case 1: return "Hot Coffee";
                        case 2: return "Ice Coffee";
                        default: std::cout << "Please only Enter 1 or 2!!!" << std::endl;
                    }
                }
            case 2:
                while (true){
                    std::cout << "Choose your's Drinks type" <<std::endl;
                    std::cout << "1.Juice\n2.Shake\n3.Alchohol\nChoose: ";
                    if (!(std::cin >> MenuChoice)){
                        system("cls");
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        continue;
                    }
                    switch (MenuChoice){
                        case 1: return "Juice";
                        case 2: return "Shake";
                        case 3: return "Alcohol";
                        default: std::cout << "Please only enter from 1 to 3 !!!" << std::endl;
                    }
                }
        }
    }
}

std::string Coffee(int Menu_choice){ // Coffee Menu
    int MenuChoice;
    system("cls");
	while (true){
		switch (Menu_choice){
			case 1:
				system("cls");
				std::cout << "Menu:" << std::endl;
				std::cout << "1.Americano\n2.Latte\n3.Mocha\nChoose your Hot Coffee: ";
				if (!(std::cin >> MenuChoice)){
					system("cls");
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				}
				switch (MenuChoice){
					case 1: return "Americano";
					case 2: return "Latte";
					case 3: return "Mocha";
					default:
						std::cout << "Please enter only from 1 to 3 !!!" << std::endl;
						continue;
				}
			case 2:
				system("cls");
				while (true){
					std::cout << "Menu:" << std::endl;
					std::cout << "1.Ice Mocha\n2.Caramel Freppe\n3.Ice Caramel Macchiato\nChoose your Ice Coffee: ";
					if (!(std::cin >> MenuChoice)){
						system("cls");
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
					}
					switch (MenuChoice){
						case 1: return "Ice Mocha";
						case 2: return "Caramel Freppe";
						case 3: return "Ice Caramel Macchiato";
						default: std::cout << "Please enter only from 1 to 3 !!!" << std::endl;
					}
				}
		}
	}
}

std::string Drinks(int Menu_choice){
    int MenuChoice, Type;
    system("cls");
    while (true){
        std::cout << "Choose your drinks menu:" << std::endl;
        switch (Menu_choice){
            case 1:
                while (true){
                    std::cout << "Juice Menu" << std::endl;
                    std::cout << "1.Orange Juice\n2.Apple Juice\nChoose: ";
                    if (!(std::cin >> MenuChoice)){
                        system("cls");
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    }
                    switch (MenuChoice){
                        case 1: return "Orange Juice";
                        case 2: return "Apple Juice";
                        default:
                            std::cout << "\nPlease choose only 1 or 2" << std::endl;
                            continue;
                    }
                }
            case 2:
                while (true){
                    std::cout << "Shake Menu" << std::endl;
                    std::cout << "1.Strawberry Ice Cream\n2.Dutch Chocolate Ice Cream\n3.Happy Treak Ice Cream\nChoose your Shake: ";
                    if (!(std::cin >> MenuChoice)){
                        system("cls");
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    switch (MenuChoice){
                        case 1: return "Strawberry Ice Cream";
                        case 2: return "Dutch Chocolate Ice Cream";
                        case 3: return "Happy Treak Ice Cream";
                        default:
                            std::cout << "Please enter only from 1 to 3 !!!" << std::endl;
                            continue;
                    }
                }
            case 3:
                while (true){
                    system("cls");
                    std::cout << "Please choose your Type" << std::endl;
                    std::cout << "1.Beer\n2.Wine\nChoose: ";
                    if (!(std::cin >> Type)){
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    }
                    switch (Type){
                        case 1:
                            while (true){
                                system("cls");
                                std::cout << "Beer Menu: " << std::endl;
                                std::cout << "1.Hanuman premium beer\n2.Ganzberg\n3.Anchor\n4.Cambodia\n5.Krud\nChoose your beer: ";
                                if (!(std::cin >> MenuChoice)){
                                    system("cls");
                                    std::cin.clear();
                                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                }
                                switch (MenuChoice){
                                    case 1: return "Hanuman premium beer";
                                    case 2: return "Ganzberg";
                                    case 3: return "Anchor";
                                    case 4: return "Cambodia";
                                    case 5: return "Krud";
                                    default: std::cout << "Please enter only from 1 to 5 !!!";
                                }
                            }
                        case 2:
                            while (true){
                                system("cls");
                                std::cout << "Wine Menu: " << std::endl;
                                std::cout << "1.Cabernet Sauvignon\n2.Merlot\n3.Pinot Noir\n4.Barbera\nChoose your Wine: ";
                                if (!(std::cin >> MenuChoice)){
                                    system("cls");
                                    std::cin.clear();
                                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                }
                                switch (MenuChoice){
                                    case 1: return "Cabernet Sauvignon";
                                    case 2: return "Merlot";
                                    case 3: return "Pinot Noir";
                                    case 4: return "Barbera";
                                    default: std::cout << "Please enter only from 1 to 4 !!!";
                                }
                            }
                        default: std::cout << "Please enter only 1 or 2 !!!";
                    }
                }
        }
    }
}

float Prices(std::string Product){
    if (Product == "Americano"){
        return 1.25;
    }
    else if (Product == "Latte" || Product == "Caramel Freppe" || Product == "Strawberry Ice Cream"){
        return 2;
    }
    else if (Product == "Dutch Chocolate Ice Cream"){
        return 3;
    }
    else if (Product == "Apple Juice" || Product == "Mocha"){
        return 1.5;
    }
    else if (Product == "Ice Mocha" || Product == "Orange Juice"){
        return 1.25;
    }
    else if (Product == "Ice Caramel Macchiato" || Product == "Happy Treak Ice Cream"){
        return 2.5;
    }
    else if (Product == "Hanuman premium beer"){
        return 16;
    }
    else if (Product == "Ganzberg" || Product == "Anchor" || Product == "Cambodia"){
        return 1;
    }
    else if (Product == "Krud"){
        return 6.40;
    }
    else if (Product == "Cabernet Sauvignon"){
        return 100;
    }
    else if (Product == "Merlot"){
        return 55;
    }
    else if (Product == "Pinot Noir"){
        return 125;
    }
    else if (Product == "Barbera"){
        return 45;
    }
    return 0;
}
