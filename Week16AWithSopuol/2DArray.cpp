#include <iostream>
int num(int arr[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0 ; j < size - 1 - i ; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int k = 0 ; k < size; k++){
        std::cout << arr[k] << " ";
    }
    return 0;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int size = std::size(arr);
    int yyy[] = {6,7,8,9,10};
    int size1 = std::size(yyy);
    num(arr, size);
    num(yyy, size1);
    return 0;
}
