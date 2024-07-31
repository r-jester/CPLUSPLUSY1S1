#include <iostream>
// Search an array for an element

int searchArray(int array[], int size, int element);
int searchFoods(std::string array[], int size, std::string element);

int main(){

    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // int index;
    // int myNum;

    // std::cout << "Enter element to search for: " << '\n';
    // std::cin >> myNum;

    // index = searchArray(numbers, size, myNum);

    // if(index != -1){
    //     std::cout << myNum << " is at index " << index;
    // }
    // else{
    //     std::cout << myNum << " is not in the Array!";
    // }
    std::string foods[] = {"Pizza", "Hamburger", "Hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::getline(std::cin, myFood);

    index = searchFoods(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " is in the Food Menu at index " << index;
    }
    else{
        std::cout << myFood << " is not in the Food Menu!";
    }

    return 0;
}
// int searchArray(int array[], int size, int element){

//     for(int i = 0 ; i < size ; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }
//     return -1;
// }
int searchFoods(std::string array[], int size, std::string element){

    for(int i = 0 ; i < size ; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}