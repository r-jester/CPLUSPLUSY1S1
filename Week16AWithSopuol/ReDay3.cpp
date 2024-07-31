#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <vector>
#include <limits>
#include <iomanip>
#include <unistd.h>

// Function prototypes
void bankApp();
void topUpmoney(double &balance);
void LuckyDraw();
void ExchangeRate();

int main()
{
    // Variable to control the main loop
    bool virak = true;
    srand(time(null));
    // Vectors to store account information
    std::vector <std::string> account;
    std::vector <std::string> password;
    std::vector <std::string> PIN;

    // Main loop for the banking system
    while (virak)
    {
        int choice;
        // Prompt for user choice
        std::cout << "Click #1 to Create Account\nClick #2 to login\nChoose: ";

        // Input validation
        if (!(std::cin >> choice))
        {
            system("cls");                                                      // Clear screen
            std::cin.clear();                                                   // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            continue;                                                           // Continue to next iteration
        }

        // Account creation
        if (choice == 1)
        {
            system("cls");
            std::string name, pw, pin;
            std::cout << "Enter Your name: ";
            std::cin >> name;
            std::cout << "Enter Your Password: ";
            std::cin >> pw;
            std::cout << "Enter PIN: ";
            std::cin >> pin;
            // Store account information
            account.push_back(name);
            password.push_back(pw);
            PIN.push_back(pin);
            system("cls");
        }
        // Login
        else if (choice == 2)
        {
            std::string name, pw, pin;
            std::cout << "Enter Your name: ";
            std::cin >> name;
            std::cout << "Enter Your Password: ";
            std::cin >> pw;

            bool loginSuccess = false;
            // Check if login credentials are valid
            for (size_t i = 0; i < account.size(); ++i)
            {
                if (account[i] == name && password[i] == pw)
                {
                    loginSuccess = true;
                    break;
                }
            }
            if (loginSuccess)
            {
                std::cout << "Confirm PIN: ";
                std::cin >> pin;
                // Validate PIN
                for (size_t i = 0; i < PIN.size(); ++i)
                {
                    if (PIN[i] == pin)
                    {
                        virak = false;
                        break;
                    }
                }
                if (!virak)
                    break;
            }
            else
            {
                system("cls");
                std::cout << "Please Try Again!!!\n";
            }
        }
        else
        {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
    // Once logged in, display welcome message and proceed to banking operations
    std::cout << "Welcome!!!";
    bankApp(); // Call banking application function
    return 0;
}

// Function for banking operations
void bankApp()
{
    system("cls");        // Clear screen
    system("color 7");    // Set text color
    double balance = 0.0; // Initialize balance
    double deposit;
    double withdraw;
    int option;
    do
    {
        // Display menu options
        std::cout << "******* Jester ATM *******\n";
        std::cout << "1. Check Your Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exchange Rate\n";
        std::cout << "5. Top up Money\n";
        std::cout << "6. Lucky Draw\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter option: ";

        // Input validation
        if (!(std::cin >> option))
        {
            system("cls");                                                      // Clear screen
            std::cin.clear();                                                   // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }

        switch (option)
        {
        case 1:
            // Display current balance
            std::cout << std::fixed << std::showpoint << std::setprecision(2) << "Your Balance is: " << balance << " $" << '\n';
            break;
        case 2:
            // Deposit money
            std::cout << "Enter Amount of Money: ";
            std::cin >> deposit;
            if (deposit < 0)
            {
                std::cout << "Invalid Amount!!\n";
            }
            else
            {
                balance = balance + deposit;
            }
            // Display updated balance
            std::cout << std::fixed << std::showpoint << std::setprecision(2) << "Your Balance is: " << balance << " $" << '\n';
            break;
        case 3:
            // Withdraw money
            std::cout << "Enter Amount of Money: ";
            std::cin >> withdraw;
            if (withdraw < 0)
            {
                std::cout << "Invalid Amount!!\n";
            }
            else if (withdraw > balance)
            {
                std::cout << "Invalid Amount!!\n";
            }
            else
            {
                balance = balance - withdraw;
            }
            // Display updated balance
            std::cout << std::fixed << std::showpoint << std::setprecision(2) << "Your Balance is: " << balance << " $" << '\n';
            break;
        case 4: ExchangeRate(); break;
        case 5: topUpmoney(balance); break;
        case 6: LuckyDraw(); break;
        default:
            system("cls"); // Clear screen
            break;
        }
    } while (option != 7); // Exit loop when user chooses to exit
}

void LuckyDraw(){
    std::string spin;
    int randNum;
    while(true){
        std::cout << "================ LuckyDraw ================\n";
        std::cout << "Reward!!!\n";
        std::cout << "1. Airpods Pro\n";
        std::cout << "2. iPhone 10 Pro Max\n";
        std::cout << "3. Mac Book Air M5\n";
        std::cout << "4. Apple Watch\n";
        std::cout << "5. Speaker\n";
        std::cout << "Press Enter to Spin/ Exit to Close: ";
        getline(std::cin, spin);
        if(spin == "Exit" or spin == "exit"){
            for (int i = 0; i < 101; i ++){
                std::cout << "\rShutdown " << i << "%";
            }
            std::cout << "\n";
            system("cls");
            break;
        }
        system("cls");
        randNum = (rand() % 5) + 1;
        std::cout << "Your Reward Here!!\n";
        switch(randNum){
            case 1:
                std::cout << "--> Airpods Pro\n";
                break;
            case 2:
                std::cout << "--> iPhone 10 Pro Max\n";
                break;
            case 3:
                std::cout << "--> Mac Book Air M5\n";
                break;
            case 4:
                std::cout << "--> Apple Watch\n";
                break;
            case 5:
                std::cout << "--> Speaker\n";
                break;
        }
    }
}

void ExchangeRate(){
    std::cout << std::setprecision(5) << std::fixed;
    int choice, method;
    float amount;
    std::string exchange_choice[] = {"1.Dollar to Riel", "2.Riel to Dollar", "3.Riel to Baht", "4.Baht to Riel", "5.Dollar to Baht", "6.Baht to Dollar"};
    float exchange_price[] = {4069, 0.00025, 0.0090, 11.11, 36.72, 0.027};
    std::string sign[] = {"Riel", "Dollar", "Baht", "Riel", "Baht", "Dollar"};
    system("cls");
    std::cout << "************************* Exchange Rate *************************" << std::endl;
    for (int i = 0; i < sizeof(exchange_choice)/sizeof(exchange_choice[0]); i++){
        std::cout << exchange_choice[i] << " ";
        std::cout << exchange_price[i] << " " << sign[i] << std::endl;
        
    }
    do {
        std::cout << "************************* Choose method *************************" << std::endl;
        std::cout << "1.Back\n2.Exchange Calculator\nPick: ";
        if (!(std::cin >> choice))
        {
            system("cls");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 2){
            pick:
            system("cls");
            std::cout << "************************* Exchange Calculator Choice *************************" << std::endl;
            for (int method = 0 ; method < sizeof(exchange_choice)/sizeof(exchange_choice[0]) ; method++){
                std::cout << exchange_choice[method] << std::endl;
            }
            std::cout << "Choose: ";
            std::cin >> method;
            switch(method){
                case 1:
                    std::cout << "Enter amount to convert from Dollar to Riel = ";
                    std::cin >> amount;
                    std::cout << amount * exchange_price[0] << " Riel" << std::endl;
                    break;
                case 2:
                    std::cout << "Enter amount to convert from Riel to Dollar = ";
                    std::cin >> amount;
                    std::cout << amount * exchange_price[1] << " Dollar" << std::endl;
                    break;
                case 3:
                    std::cout << "Enter amount to convert from Riel to Baht = ";
                    std::cin >> amount;
                    std::cout << amount * exchange_price[2] << " Baht" << std::endl;
                    break;
                case 4:
                    std::cout << "Enter amount to convert from Baht to Riel = ";
                    std::cin >> amount;
                    std::cout << amount * exchange_price[3] << " Riel" << std::endl;
                    break;
                case 5:
                    std::cout << "Enter amount to convert from Dollar to Baht = ";
                    std::cin >> amount;
                    std::cout << amount * exchange_price[4] << " Baht" << std::endl;
                    break;
                case 6:
                    std::cout << "Enter amount to convert from Baht to Dollar = ";
                    std::cin >> amount;
                    std::cout << amount * exchange_price[5] << " Dollar" << std::endl;
                    break;
                default:
                    std::cout << "Not in choice!!!";
                    sleep(1);
                    goto pick;
            }
        }
        else {
            continue;
        }
    } while (choice != 1);
    system("cls");
}

void topUpmoney(double &balance){
    double amount;
    std::vector<std::string> TEL;
    char end;
    std::string tel;
    do{
    std::cout << "============== Top Up ==============\n";
    std::cout << "Enter Phone Number: ";
    std::cin.ignore();
    std::getline(std::cin , tel);
    TEL.push_back(tel);
    std::cout << "Enter Amount!\n";
    std::cout << "1$\t1.25$\t5$\n2$\t1.5$\t10$\n";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "Check Your Wallet!!\n";
        break;
    }
    balance -= amount;
    std::cout << "Phone Number: " << tel << " Received " << amount << "$";
    std::cout << "\nDo you want to top up another phone number? (y/n) ";
    std::cin >> end;
    if(end == 'N' || end == 'n'){
        for(int i = 0 ; i < 101 ; i ++){
            std::cout << "\rShutdown " << i << "%";
        }
        std::cout << '\n';
        system("cls");
    }
    } while(end != 'N' && end != 'n');
}
