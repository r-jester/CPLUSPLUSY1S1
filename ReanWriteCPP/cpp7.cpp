#include<stdio.h>
int main()
{
	int code;
	char name[20];
	int qty;
	float price;
	float totald;
	int totalr;
	printf("+++++++++++++++++++++++++++++++\n");
	printf("Input Code=");
	scanf("%d",&code);
	fflush(stdin);
	printf("Input Name=");
	gets(name);
	printf("Input Quantity=");
	scanf("%d",&qty);
	printf("Input Price($)=");
	scanf("%f",&price);
	printf("+++++++++++++++++++++++++++++++\n");
	printf("Code	Name	Quantity	Price	Totald		Totalr\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	totald=qty*price;
	totalr=totald*4200;
	printf("%d	%s	%d(can)		%0.2f($)	%0.2f($)	%d(Riel)\n",code,name,qty,price,totald,totalr);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
