#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    char letter;
    
    cout<<setw(20)<<"\tInput Letter A,E,M,N : ";
    cin>>letter;
    switch(letter){
        case 'A': 
        cout<<"\tGood Afternoon";
        
        break;
        case 'E':
        
        cout<<"\tGood Evening";
        
        break;
        case 'M':
        
        cout<<"\tGood Morning";
        
        break;
        case 'N':
        
        cout<<"\tGood Night";
        
        break;
        default:
        cout<<"\tNoting to show\n";
        
        break;
        

    }




    return 0;
}