#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("\n number\ squre \cube");
	printf("\n--------------------\n");

	for(i=1;i<=10;i++)
	{
		printf("\n %d %d %d",i,i*i,i*i*i);
	}
	getch();
}
