#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();
	printf("\n enter any year : ");
	scanf("%d",&y);

	if(y % 4 ==0)
	{
	       printf("\n year is leap year");
	}
	else
	{
		printf("\n year is not a leap year");
	}
	getch();
}
