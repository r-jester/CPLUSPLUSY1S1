#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    float num1,num2;
    char op;
    float result;
    cout<<"\tInput First Value  : ";cin>>num1;
    cout<<"\tInput Second Value : ";cin>>num2;
    cout<<"\t+\n\t-\n\t*\n\t/\n";
    cout<<"\tChoose the Option  : ";cin>>op;
    if(op=='+'){
        result = num1 + num2;
    }
    else if(op=='-'){
        result = num1 - num2;
    }
    else if(op=='*'){
        result = num1 * num2;
    }
    else if(op=='/'){
        result = num1 / num2;
    }
    else{
        cout<<"\tInput Wrong Option...!";
    }
    cout<<"\tThe Option         : "<<op<<endl;
    cout<<"\tThe Result         : "<<result<<endl;






    return 0;
}