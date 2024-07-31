#include <iostream>
#include <iomanip>
#include <unistd.h>
int main()
{
    system("cls");

    while (true)
    {
        for (int i = 0; i < 24; i++)
        {
            for (int j = 0; j < 60; j++)
            {
                for (int k = 0; k < 60; k++)
                {
                    if (k < 10)
                    {
                        std::cout << "\r"
                                  << "Hour: " << i << " Minutes: " << j << " Second: " << k << " ";
                    }
                    else
                    {
                        std::cout << "\r"
                                  << "Hour: " << i << " Minutes: " << j << " Second: " << k;
                    }
                    sleep(1);
                }
            }
        }
    }

    return 0;
}
