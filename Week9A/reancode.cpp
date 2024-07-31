#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    system("cls");
    string id;
    int age = 19;
    char gender = 'M';
    string name = "JESTER";
	char heart = 003;
	cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<" Student Detail "<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;
	cout<<"\tInput ID : ";cin>>id;
    system("cls");
	cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;
    cout<<"\t"<<heart<<"\tID     : "<<setw(10)<<id<<setw(9)<<heart<<endl;
    cout<<"\t"<<heart<<"\tNAME   : "<<setw(10)<<name<<setw(9)<<heart<<endl;
    cout<<"\t"<<heart<<"\tAGE    : "<<setw(6)<<age<<setw(13)<<heart<<endl;
    cout<<"\t"<<heart<<"\tGENDER : "<<setw(5)<<gender<<setw(14)<<heart<<endl;
    cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;

    
    return 0;
}