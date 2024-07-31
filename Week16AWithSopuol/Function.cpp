#include<iostream>
int abs(int x){
    if (x < 0){
        return -1*x;
    }
    else{
        return x;
    }
}


int main(){
    int A;
    std::cout<<"\tEnter A: ";
    std::cin>>A;
    std::cout<<"\tThe Absolute Value Is : "<<abs(A);

    return 0;
}