#include<iostream>
using namespace std;
int main(){
    int weeks = 3, dik = 7, i, j;

    for(i =1; i<= weeks; i++){
        cout<<" week: " << i << endl;
        for (j = 1; j<=dik;j++){
            cout<<"\tDay: "<< j << endl;
        }
    }
    return 0;
}