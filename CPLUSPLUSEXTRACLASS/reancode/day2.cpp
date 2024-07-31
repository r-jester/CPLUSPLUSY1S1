#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
void green(){
    for(int s=10;s>=0;s--){
        Sleep(1000);
        system("color 2");
        cout<<"\r"<<setw(70)<<s;
        // if(s<=1){
        //         break;
        //         }
        
    }
}
void yellow(){
    for(int s=5;s>=0;s--){
        Sleep(1000);
        system("color 6");
        cout<<"\r"<<setw(70)<<s;
        // if(s<=1){
        //         break;
        //         }
        
    }
}
void red(){
    for(int s=15;s>=0;s--){
        Sleep(1000);
        system("color 4");
        cout<<"\r"<<setw(70)<<s;
        // if(s<=1){
        //         break;
        //         }
        
    }
}
int main(){
while(true){
system("cls");
cout<<"\tGo\n\n\n\n";
green();
system("cls");
cout<<"\tPrepare to Stop\n\n\n\n";
yellow();
system("cls");
cout<<"\tStop\n\n\n\n";
red();
}



    return 0;
}