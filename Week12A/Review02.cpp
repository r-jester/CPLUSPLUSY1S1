#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    system("cls");
    float num1;
    float num2;
    float result;
    char op;
    cout<<"\t==============>>CALCULATOR<<==============\n";
    cout<<"\tInput First Value  : ";cin>>num1;
    cout<<"\tChoose The Option  : ";cin>>op;
    cout<<"\tInput Second Value : ";cin>>num2;
    switch(op){
    case '+':
    result = num1 + num2;
    break;
    case '-':
    result = num1 - num2;
    break;
    case '*':
    result = num1 * num2;
    break;
    case '/':
    result = num1 / num2;
    break;
    default:
    system("cls");
    cout<<"\tInput Wrong Option";
    goto InputWrong;
    break;
    }
    cout<<"\t"<<num1<<" "<<op<<" "<<num2<<" = "<<result<<endl;
    InputWrong:
    return 0;
}