#include <iostream>
#include <algorithm>
void sortName();
int main()
{
    system("cls");
    // int c;
    // int arr[] = {1, 2, 3};
    // for (int i = 0; i < std::size(arr) - 1; i++)
    // {
    //     for (int j = 0; j < std::size(arr) - 1 -i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             c = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = c;
    //         }
    //     }
    // }
    // for (int x : arr)
    // {
    //     std::cout << x << " ";
    // }
    sortName();
    return 0;
}








void sortName()
{
    std::string arr[] = {"Virak", "Lai Seng", "Chomnor", "Sathyarak", "Chantha", "Sopuol", "Phearak"};
    std::sort(arr, arr + std::size(arr));
    for (std::string x : arr)
    {
        std::cout << x << " ";
    }
}