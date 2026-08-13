#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3,max;
	clrscr();
	printf("\n enter value of number:");
	scanf("%d%d%d",&num1,&num2,&num3);


	if(num1>=num2&&num1>=num3)
	{
		printf("\n max number is:num1");
	}
	else if(num2>=num1&&num2>=num3)
	{
		printf("\n max number is:num2");
	}
	else
	{
		printf("\n max number is:num3");
	}
	getch();
}