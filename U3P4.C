#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n enter an interger number:");
	scanf("%d",&num);
	if(num % 2 ==0)
	{
		printf("\n the number is even:");
	}
	else


	{
		printf("\n the number is odd:");
	}
	getch();
}