//Sample Clock
#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
void hour(){
    for(int h=00;h<=23;h++){
        
        system("color 2");
        for(int min=00;min<=59;min++){
        
        system("color 4");
        for(int sec=00;sec<=59;sec++){
        Sleep(980);
        system("color 6");
        cout<<"\r\tHour: "<<setw(2)<<h<<" h"<<"   Minute: "<<setw(2)<<min<<" m"<<"   Second: "<<setw(2)<<sec<<" s";
        // if(s<=1){
        //         break;
        //         }
        
    }
        // if(s<=1){
        //         break;
        //         }
        
    }
        // if(s<=1){
        //         break;
        //         }
        
    }
}
int main(){
system("cls");
while(true){
cout<<"===================>>Clock Project<<===================\n";
hour();
}
return 0;
}