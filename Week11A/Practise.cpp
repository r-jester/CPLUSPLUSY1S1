#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    char letter;
    cout<<"\tInput Letter M,A,E,N : ";
    cin>>letter;
    switch(letter){
        case 'M':
        cout<<"\tGood Morning";
        break;
        case 'A':
        cout<<"\tGood Afternoon";
        break;
        case 'E':
        cout<<"\tGood Evening";
        break;
        case 'N':
        cout<<"\tGood Night";
        break;
        default:
        cout<<"\tNothing to show";
        break;
    }






    return 0;
}