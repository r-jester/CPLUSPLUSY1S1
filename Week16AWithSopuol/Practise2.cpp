#include <iostream>
// Project
int main()
{
    int temp;
    int arr[] = {1,2,3,4,5,6,7,8,9};
int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0 ; i < size - 1 ; i++){
        for(int j = 0 ; j < size - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int a : arr){
        std::cout << a << " ";
    }
    return 0;
}