#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    char letter;
    cout<<"\tInput Letter M,A,E,N : ";cin>>letter;
    if(letter=='M'){
        cout<<"\tGood Morning...!";
    }
    else if(letter=='A'){
        cout<<"\tGood Afternoon...!";
    }
    else if(letter=='E'){
        cout<<"\tGood Evening...!";
    }
    else if(letter=='N'){
        cout<<"\tGood Night...!";
    }
    else{
        cout<<"\tInput Wrong Option...!";
    }






    return 0;
}