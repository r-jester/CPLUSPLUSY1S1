#include <iostream>
#include <windows.h>
using namespace std;
string username, password;
void login()
{
login:
    cout << "\t===================>>Login<<===================\n";
    cout << "\tEnter Username: ";
    cin >> username;
    cout << "\tEnter Password: ";
    cin >> password;
    if (password == "Okay" && username == "Jester")
    {
        cout << "\tLoading..";
        for (int i = 1; i <= 25; i++)
        {
            system("color 2");
            Sleep(80);
            cout << ".";
        }
        cout << "\n\tWelcome..!\n";
    }
    else
    {
        cout << "\tLoading..";
        for (int i = 1; i <= 25; i++)
        {
            system("color 4");
            Sleep(80);
            cout << ".";
        }
        system("cls");
        cout << "\n\tTry Again..!\n";
        goto login;
    }
}
void PIN()
{
PIN:
    int PIN;
    cout << "\tConfirm PIN: ";
    cin >> PIN;
    if (PIN == 1234)
    {
        cout << "\tLoading..";
        for (int i = 1; i <= 15; i++)
        {
            system("color A");
            Sleep(80);
            cout << ".";
        }
        cout << "\n\tVerified.!\n";
    }
    else
    {
        cout << "\tLoading..";
        for (int i = 1; i <= 15; i++)
        {
            system("color C");
            Sleep(80);
            cout << ".";
        }
        system("cls");
        cout << "\n\tTry Again.!\n";
        goto PIN;
    }
}
void menushow()
{
    double balance = 0.0, deposit = 0.0, withdraw = 0.0;
    int option;
    cout << "\t================>>BIU ATM MACHINE<<================\n";
    cout << "\t1. Check Balance\n";
    cout << "\t2. Deposit\n";
    cout << "\t3. Withdraw\n";
    cout << "\t4. Exit.!\n";
    cout << "\t================>>BIU ATM MACHINE<<================\n";
    do
    {
        cout << "\tChoose The Option(1-4): ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\tYour Balance is : " << balance << " $" << endl;
            break;
        case 2:
            cout << "\tDeposit: ";
            cin >> deposit;
            balance = balance + deposit;
            break;
        case 3:
            cout << "\tWithdraw: ";
            cin >> withdraw;
            balance = balance - withdraw;
            break;
        default:
            break;
        }
    } while (option != 4);
    system("cls");
    cout << "\t================>>BIU ATM MACHINE<<================\n";
    cout << "\t2. Deposit : " << deposit << " $" << endl;
    cout << "\t3. Withdraw : " << withdraw << " $" << endl;
    cout << "\t1. Your Balance is : " << balance << " $" << endl;
    cout << "\t================>>BIU ATM MACHINE<<================\n";
}
int main()
{
    system("cls");
    login();
    system("cls");
    PIN();
    system("cls");
    menushow();
    return 0;
}