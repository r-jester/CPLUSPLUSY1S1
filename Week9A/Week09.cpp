#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    //if,else if, else
    system("cls");
    int score;
    cout<<"\tInput Score: ";
    cin>>score;
    if(score >= 80){
        cout<<"\tYou Pass A\n";
    }else if(score >= 50){
        cout<<"\tYou pass B\n";
    }else{
        cout<<"\tYou fall in love with me\n";
    }
    
    
    
    return 0;
}