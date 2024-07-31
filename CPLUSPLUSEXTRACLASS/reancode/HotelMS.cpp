#include <iostream>
#include <string>

class Staff
{
private:
    std::string contact;
    int room_No;
    std::string day_of_stay;
protected:
    int id;
    std::string name;
    int age;
    char gender;
    std::string dob;
    std::string address;
public:
    void setPerson();
    void getPerson();
    void AddCustomer(){
        setPerson();
        std::cout << "Enter Contact: ";
        getline(std::cin, contact);
        std::cout << "Enter Room Number: ";
        std::cin >> room_No;
        std::cout << "Enter Day of Stay: ";
        std::cin.ignore();
        getline(std::cin, day_of_stay);
    }
    void GetCustomer(){
        getPerson();
        std::cout << "Contact: " << contact << std::endl;
        std::cout << "Room Number: " << room_No << std::endl;
        std::cout << "Day of Stay: " << day_of_stay << std::endl;
    }
};
class Manager : public Staff
{
private:
    std::string start_to_work;
    float salary;
    std::string position;
public:
    void AddStaff(){
        setPerson();
        std::cout << "Enter Start to Work: ";
        getline(std::cin, start_to_work);
        std::cout << "Enter Salary: ";
        std::cin >> salary;
        std::cout << "Enter Position: ";
        std::cin.ignore();
        getline(std::cin, position);
    }
    void GetStaff(){
        getPerson();
        std::cout << "Start to Work: " << start_to_work << std::endl;
        std::cout << "Salary: " << salary << " $" << std::endl;
        std::cout << "Position: " << position << std::endl;
    }
};
void Staff::setPerson(){
        std::cout << "Enter Id: ";
        std::cin >> id;
        std::cout << "Enter Name: ";
        std::cin.ignore();
        getline(std::cin, name);
        std::cout << "Enter Age: ";
        std::cin >> age;
        std::cout << "Enter Gender: ";
        std::cin >> gender;
        while(getchar() != '\n');
        std::cout << "Enter Date of Birth: ";
        getline(std::cin, dob);
        std::cout << "Enter Address: ";
        getline(std::cin, address);
}
void Staff::getPerson(){
        std::cout << "Id: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Date of Birth: " << dob << std::endl;
        std::cout << "Address: " << address << std::endl;
}
void login()
{
    std::string un, pass;
    bool logintrue = 0;
    do
    {
        system("cls");
        std::cout << "Enter Username: ";
        std::cin >> un;
        std::cout << "Enter Password: ";
        std::cin >> pass;
        if (un == "Virak" && pass == "1100")
        {
            std::cout << "Welcome to the System!!!\n";
            logintrue = 1;
        }
    } while (!logintrue);
}
int main()
{
    int op;
    Staff newCustomer;
    Manager newStaff;
    std::cout << "1. Manager\n2. Staff\nChoose (1-2) : ";
    std::cin >> op;
    login();
    switch(op){
        case 1:
        std::cout << "Manger.!\n";
            newStaff.AddStaff();
            newStaff.GetStaff();
            break;
        case 2:
        std::cout << "Staff.!\n";
            newCustomer.AddCustomer();
            newCustomer.GetCustomer();
            break;
    }
    return 0;
}