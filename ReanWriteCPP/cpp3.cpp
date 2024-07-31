#include<stdio.h>
int main()
{
	int id;
	char name[20];
	char gender;
	float score;
	char address[20];
	printf("========Kak Mnus========\n");
	printf("Input Id=");
	scanf("%d",&id);
	fflush(stdin);
	printf("Input Name=");
	gets(name);
	printf("Input Gender=");
	scanf("%c",&gender);
	printf("Input Score=");
	scanf("%f",&score);
	fflush(stdin);
	printf("Input Address=");
	gets(address);
	printf("========================\n");
	printf("Id=%d\n",id);
	printf("Name=%s\n",name);
	printf("Gender=%c\n",gender);
	printf("Score=%0.4f\n",score);
	printf("Address=%s\n",address);
	printf("========================\n");
	return 0;
}
