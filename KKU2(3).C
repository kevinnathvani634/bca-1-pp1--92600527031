#include<stdio.h>
#include<conio.h>
void main()
{
	float pa,r,y,si;
	clrscr();
	printf("\n enter pa");
	scanf("%d" ,&pa);

	printf("\n enter r amount");
	scanf("%d" ,&r);

	printf("\n enter y amount");
	scanf("%d" ,&y);

	si=(pa * r * y) /100;

	printf("/n simple interest is %f",si);
	getch();
}

