#include<stdio.h>
int main()
{
	int code;
	char name[20];
	int qty;
	float price;
	float totald,totalr;
	printf("-----------------------------Menu Drinks---------------------------\n");
	printf("	Input Code	=");
	scanf("%d",&code);
	fflush(stdin);
	printf("	Input Name	=");
	gets(name);
	printf("	Input Quantity	=");
	scanf("%d",&qty);
	printf("	Input Price($)	=");
	scanf("%f",&price);
	totald=qty*price;
	totalr=totald*4100;
	printf("===================================================================\n");
	printf("	Code	Name	Quantity	Price	Totald	Totalr\n");
	printf("-------------------------------------------------------------------\n");
	printf("	%d	%s	%d(can)		%.2f($)	%.2f($)	%.2f($)\n",code,name,qty,price,totald,totalr);
	printf("-------------------------------------------------------------------\n");
	printf("			    Thank You...!\n");
	return 0;
}
