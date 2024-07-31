#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    int day;
   
    cout<<setw(20)<<"\tInput Day 1-2 : ";
    cin>>day;
    switch(day){
        case 1:
        system("cls");
        cout<<"\tSunrise";
        
        break;
        case 2:
        system("cls");
        cout<<"\tSunset";
        
        break;
        default:
        cout<<"\tInput Wrong optoin\n";
        system("cls");
        goto start;
        break;
        

    }




    return 0;
}