#include<iostream>
using namespace std;
void hello(){
    cout<<"Hello World\n";
}



int main(){
    system("cls");

    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            std::cout << "Number: " << i << "\n";
        }
    }

    return 0;
}