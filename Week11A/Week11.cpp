#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main(){
    
    start:

    system("cls");

    cout<<"\t Hello Week11...!"<<endl;

    string password,username;

    cout<<"\t +++++++++++++>LOGIN<+++++++++++++\n";

    cout<<"\t Enter Username: ";cin>>username;
    
    cout<<"\t Enter Password: ";cin>>password;

    if( username == "Jester" && password == "123" ){
        system("cls");
        cout<<"\t Welcome to the system...!\n";
        
    }else{
        system("cls");
        cout<<"\t Please try again...!\n";
        goto start;
    }
    
    return 0;
}