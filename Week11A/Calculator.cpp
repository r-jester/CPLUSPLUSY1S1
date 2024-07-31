#include<iostream>
using namespace std;
int main(){
    system("cls");
    float num1,num2;
    float result;
    char op;
    cout<<"\t==========>>CALCULATOR<<==========\n";
    cout<<"\tEnter first Value: ";
    cin>>num1;
    cout<<"\tEnter second Value: ";
    cin>>num2;
    cout<<"\n\t+\n\t-\n\t*\n\t/\n";
    cout<<"\tChoose The Option : ";
    cin>>op;
    switch (op)
    {
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
    cout<<"\tWrong Option...........!";
        break;
    }
    cout<<"\tThe Option : "<<op<<endl;
    cout<<"\tResult : "<<result<<endl;



    return 0;
}