#include <iostream>
// Break and Continue
int main(){

    for(int i = 1 ; i <= 20 ; i++){
        // if(i == 5){
        //     continue;
        // }
        std::cout << i << '\n';
        if(i == 13){
            break;
        }
    }

    return 0;
}