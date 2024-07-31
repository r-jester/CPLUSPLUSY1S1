#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number = 0;
    int sum = 0;
    do{
        sum = sum + number;
        cout<<"Enter a number: ";cin >> number;
    }
    while(number >= 0);
    cout<<"\nThe sum is: "<<sum<<endl;


    return 0;
}