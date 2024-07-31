#include<iostream>
using namespace std;
int main()
{int array[150];

	for(int i = 0 ; i < 150 ; i++){
		array[i]= 1 + rand() % 51;
		cout<<"Array Index: "<<i<<"Value: "<<array[i]<<endl;
	}
	return 0;
}
