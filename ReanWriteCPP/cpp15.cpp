#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int array[150];
  for(int i = 0 ; i < 150 ; i++){
  array[i]= 1 + rand() % 50;
  cout<<" Array Index: "<<i+1<<" Value: "<<array[i]<<endl;
  }
    return 0;
}
