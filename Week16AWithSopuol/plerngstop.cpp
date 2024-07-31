#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;
int main()
{
    system("cls");
    while (true)
    {
        string color[3] = {"Red", "Green", "Yellow"};
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                system("cls");
                system("color 4");
                cout << "\tplease Stop\n";
                cout << color[0] << "\n";
                for (int j = 10; j > 0; j--)
                {
                    (j < 10) ? cout << "\r" << j << " " : cout << "\r" << j;
                    sleep(1);
                }
            }
            else if (i == 1)
            {
                system("cls");
                system("color 2");
                cout << "\tPlease Go\n";
                cout << color[1] << "\n";
                for (int j = 10; j > 0; j--)
                {
                    (j < 10) ? cout << "\r" << j << " " : cout << "\r" << j;
                    sleep(1);
                }
            }
            else
            {
                system("cls");
                system("color 6");
                cout << "\tMerl Plerng phg\n";
                cout << color[2] << "\n";
                for (int j = 10; j > 0; j--)
                {
                    (j < 10) ? cout << "\r" << j << " " : cout << "\r" << j;
                    sleep(1);
                }
            }
        }
    }
    return 0;
}