#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    system("cls");
    cout<<fixed<<showpoint<<setprecision(2);
    double num1,
           num2;
    double addition=0.0,
           subtraction=0.0,
           division=0.0,
           multiplication=0.0;
    int    modulus=0;
    cout<<"\tPls, Input First  Number: ";
    cin>>num1;
    cout<<"\tPls, Input Second Number: ";
    cin>>num2;
    addition=num1+num2;
    subtraction=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
    modulus=fmod(num1,num2);
    cout<<"\tThe Addition       of 2 number: "<<num1<<" + "<<num2<<" = "<<addition<<endl;
    cout<<"\tThe Subtraction    of 2 number: "<<num1<<" - "<<num2<<" = "<<subtraction<<endl;
    cout<<"\tThe Multiplication of 2 number: "<<num1<<" * "<<num2<<" = "<<multiplication<<endl;
    cout<<"\tThe Division       of 2 number: "<<num1<<" / "<<num2<<" = "<<division<<endl;
    cout<<"\tThe Modulus        of 2 number: "<<num1<<" % "<<num2<<" = "<<modulus<<endl;
    return 0;
}