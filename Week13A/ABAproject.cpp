#include<iostream>
#include<windows.h>
#include<iomanip>
#include<string>
using namespace std;
string username,password;
void login(){
    login:
    cout <<"\t\t\t =================>> Login<<==================\n";
    cout <<"\tEnter Username:";
    cin>>username;
    cout <<"\tEnter Password:";
    cin>>password;
        if(username == "Admin" && password == "7788"){
            cout <<"\tLoading..";
                for(int i = 1; i<=20;i++){
                Sleep(80);
                system ("Color 1A");
                cout <<".";
                }
                cout<<"\n\tWelcome\n";
                system("cls");
            }else{
                cout <<"\tLoading..";
                for(int i = 1; i<=20;i++){
                Sleep(80);
                system ("Color C");
                cout <<".";
                }
                cout <<"\n\tWrong Username or Password\n";
                system("cls");
                goto login;
            }
}
void PIN(){
    int PIN;
    PIN:
    cout <<"\tCOnfirm PIN:";
    cin>>PIN;
    if(PIN==4141){
        cout <<"\tLoading..";
                for(int i = 1; i<=20;i++){
                Sleep(80);
                system ("Color A");
                cout <<".";
                }
                cout<<"\n\tVerified\n";
    }else{
        cout <<"\tLoading..";
                for(int i = 1; i<=20;i++){
                Sleep(80);
                system ("Color C");
                cout <<".";
                }
                cout <<"\n\tTry again\n";
                system("cls");
                goto PIN;
            }
}
void showMenu(){
    system("Color 9");
    cout <<"\t**********************************************\n";
    cout <<"\t\t1.Check Balance\n";
    cout <<"\t\t2.Deposit\n";
    cout <<"\t\t3.Withdraw\n";
    cout <<"\t\t4.payment\n";
    cout <<"\t\t5.Exit\n";
    cout <<"\t**********************************************\n";
}
void option(){
    int option;
    double balance = 0.00,paymentAmount= 0.00;
    double depositAmount= 0.00, withdrawAmount= 0.00;
        showMenu();
    do{
        cout <<"\tChoose the  Option:";
        cin>>option;
        switch(option){
            case 1:
            cout <<"\tYour Balance =$"<<balance<<endl;
                break;
            case 2:
            cout <<"\tDeposit Amount:";
            cin>>depositAmount;
            balance = balance + depositAmount ; 
            break;
            case 3:
            cout<<"\tWithdraw Amount:";
            cin>>withdrawAmount;
            balance = balance - withdrawAmount;
                break;
            case 4:
            cout<<"\tPayment Amount:";
            cin>>paymentAmount;
            balance = balance - paymentAmount;
                break;
            default:
            system("cls");
                break;
        }
    }while(option !=5);
    cout <<"\t**********************************************\n";
    cout <<"\t\t2.Deposit Amount: "<<depositAmount<<" $"<<endl;
    cout <<"\t\t3.Withdraw Amount: "<<withdrawAmount<<" $"<<endl;
    cout <<"\t\t4.Payment Amount: "<<paymentAmount<<" $"<<endl;
    cout <<"\t\t1.Your Balance is: "<<balance<<" $"<<endl;
    cout <<"\t**********************************************\n";
}
int main(){
    cout<<fixed<<showpoint<<setprecision(2);
    system ("cls");
//    login();
//    system("cls");
//    PIN();
//    system("cls");
//    showMenu();
    option();
    return 0;
}