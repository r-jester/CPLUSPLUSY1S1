#include <iostream>

void printArray(int *arr, int size){
	for (int i = 0; i < size; i ++){
		std::cout << "Array Index [" << i << "] : " << arr[i] << '\n';
	}
}
void Swap(int *a, int *b){
	int z;
	z = *a;
	*a = *b;
	*b = z;
	std::cout << "A = " << *a << '\n';
	std::cout << "B = " << *b << '\n';
	
}

int main()
{
    system("cls");
    int array[] = {3,5,2,6,7};
    printArray(array,5);
    std::cout << "--->> Next Page <<---\n";
    std::cout << "..=>> Swapping <<=..\n";
    int x = 10;
    int y = 20;
    Swap(&x, &y);
    std::cout << "X = " << x << '\n';
    std::cout << "Y = " << y << '\n';
    
	return 0;
}
