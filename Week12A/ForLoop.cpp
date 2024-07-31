#include<iostream>
using namespace std;
int main(){
    system("cls");
    int n , i ;
    A:
    cout << " Enter the Number(2-9) = " ;
    cin >> n ;
    if( n>=2 && n<=9){
    for ( i = 1 ; i <= 10 ; i ++ ) {
        cout << " \t " << n << " * " << i << " = " << ( i * n ) << endl ;
    }
    }else{
        system("cls");
        cout << " \t\" Input Wrong Option \"\n ";
        goto A;
    }
    cout << " \n " ;







    return 0;
}