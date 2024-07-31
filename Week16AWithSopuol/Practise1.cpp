#include <iostream>
#include <windows.h> // for Sleep(digit);
#include <unistd.h>
#include <limits>
using namespace std;
void login();
void love();
int main() {
    while(true){
    system("cls");
    love();
    }
    return 0;
}
void login(){
string un, pass;
    login:
    cout<<"\t=================>Login<=================\n";
    cout<<"\tEnter Username: ";cin>>un;
    cout<<"\tEnter Password: ";cin>>pass;
    if( un == "Admin" && pass == "khmer" ){
        cout<<"\tLoading..";
        system("color 2");
        for (int i = 0 ; i < 30 ; i++){
            Sleep(100);
            cout<<".";
        }
        system("cls");
        cout<<"\n\tSuccess";
    }
    else{
        cout<<"\tLoading..";
        system("color 4");
        for (int i = 0 ; i < 30 ; i++){
            Sleep(100);
            cout<<".";
        }
        system("cls");
        cout<<"\n\tTry Again!\n";
        goto login;
    }
    
}
void love(){
    string name[] = {"Brathna","linda","Nika","Rak","Nary"};
    for (int i = 0 ; i < size(name) ; i++){
        sleep(1);
        cout<< name[i] <<endl;
    }
}







































































































// std::string menuname[] = { "1. Coffee" , "2. Drink" };
// for ( int i = 0 ; i < 2 ; i++){
//     std::cout << "\t" << menuname[i] << '\n';
// }