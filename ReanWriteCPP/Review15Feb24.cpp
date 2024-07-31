#include <iostream>

int main(){
    system("cls");

    char* pGrades = nullptr;
    int size;

    std::cout << "Enter the size of dynamic array: ";
    std::cin >> size;

    pGrades = new char[size];

    for (size_t i = 0; i < size; i += 1){
        std::cout << "Enter Grade #" << i + 1 << " : ";
        std::cin >> pGrades[i]; // Use array indexing to read the input
		while(getchar() != '\n'); // clear bug
    }

    std::cout << "Display\n";

    for (size_t i = 0; i < size; i += 1){
        std::cout << "Grade #" << i + 1 << " is : " << pGrades[i] << "\n";
    }

    delete[] pGrades;
    pGrades = nullptr;

    return 0;
}
