#include <iostream>




int sum(int x , int y);
int max(int x , int y);
int max(int x , int y , int z);
int min(int x , int y);
int min(int x , int y , int z);



int main() {
    system("Cls");
    std::cout << "Hello World\n";
    std::cout << sum(3,4)   << std::endl;
    std::cout << max(3,5)   << std::endl;
    std::cout << max(2,3,4) << std::endl;
    std::cout << min(2,4)   << std::endl;
    std::cout << min(1,4,6) << std::endl;
    return 0;
}























int sum(int x , int y){
    int c = x + y;
    return c;
}
int max(int x , int y){
    if( x > y ){
        return x;
    }
    return y;
}
int max(int x , int y , int z){
    if( x > y && x > z){
        return x;
    }
    else if( y > x && y > z){
        return y;
    }
    return z;
}
int min(int x , int y){
    if( x < y ){
        return x;
    }
    return y;
}
int min(int x , int y , int z){
    if( x < y && x < z){
        return x;
    }
    else if( y < x && y < z){
        return y;
    }
    return z;
}