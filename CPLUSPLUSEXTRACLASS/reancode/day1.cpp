//Please note that this is Windows specific code
#include <iostream>
#include <Windows.h>
#include<iomanip>
using namespace std;
void green(){
     for (int sec = 10; sec < 16; sec--)
 {
system("color 2");
      Sleep(1000);
      cout << "\rGo"<< setw(50) << sec;
      if (sec <2)
      break;
    }
}
void yellow(){
     for (int sec = 4; sec <11; sec--)
 {
system("color 6");
      Sleep(1000);
      cout << "\rPrepare to Stop"<< setw(50) << sec;
      if (sec <2)
      break;
    }
}
void red(){
     for (int sec = 15; sec <21; sec--)
 {
system("color 4");
      Sleep(1000);
      cout << "\rStop"<< setw(50) << sec;
      if (sec <2)
      break;
    }
}

int main()
{
    system("cls");
    green();
    system("cls");
    yellow();
    system("cls");
    red();
    return 0;
}
