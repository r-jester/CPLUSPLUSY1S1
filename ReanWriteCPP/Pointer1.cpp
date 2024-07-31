#include<iostream>
using namespace std;
// Address symbol: &,Ex;int a = 10;	cout<<" A's Address: "<<&a<<endl;

void swap( int *x, int *y){
	int z = *(x);
	*(x) = *(y);
	*(y) = z;	
}
//int addition( int x, int y){
//	int z = x + y;
//	return z;
//}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a,&b);

	cout<<"A: "<<a<<endl;
	cout<<"B: "<<b<<endl;
//cout<<"Value: "<<addition(20,5)<<endl;
//	int a = 10;
//	int *ptr = &a;
//	*(ptr) = 25;
//	int b = 20;
//	ptr = &b;
//	*(ptr) = 52;
//	
//	cout<<"New A Value: "<<a<<endl;
//	cout<<"New B Value: "<<b<<endl;
//string name = "Jester";
//string *ptr = &name;
//*(ptr) = "Virak";
//cout<<" Name: "<<name<<endl;

	return 0;
}
