#include<iostream>//code cpp
#include<stdio.h>//code c
#include<conio.h>//for getch
#include<iomanip>//for setprecision
//code cpp + code c
using namespace std;
int main()
{
	int code;
	char name[20];
	cout<<"Input Code: "<<endl;
	cin>>code;
	fflush(stdin);
	printf("Input Name: \n");
	gets(name);
	cout<<"-------------"<<endl;
	cout<<"Code: "<<code<<endl;
	printf("Name: %s\n",name);
	cout<<"-------------"<<endl;
	printf("Thank You\n");
	getch();return 0;
}
