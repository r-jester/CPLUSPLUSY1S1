#include<stdio.h>
int main()
{
	int code;
	char name[20];
	int qty;
	float price;
	float totald,totalr;
	printf("++++++++++Food++++++++++++\n");
	printf("--------------------------\n");
	printf("Input Code=");
	scanf("%d",&code);
	fflush(stdin);
	printf("Input Name=");
	gets(name);
	printf("Input Quantity=");
	scanf("%d",&qty);
	printf("Input Price=");
	scanf("%f",&price);
	printf("++++++++++++++++++++++++++\n");
	printf("Code=%d\n",code);
	printf("Name=%s\n",name);
	printf("Quantity=%d\n",qty);
	printf("Price=%.2f\n",price);
	totald=qty*price;
	totalr=totald*4200;
	printf("Totald=%.2f\n",totald);
	printf("Totalr=%.2f\n",totalr);
	printf("++++++++++++++++++++++++++\n");
	return 0;
}
