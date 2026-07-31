#include<stdio.h>
#include<conio.h>
void main()
{
	float pa,r,y,si;
	clrscr();
	printf("/n enter value of pa:");
	scanf("%f" , &pa);
	printf("/n enter value of rate of r:");
	scanf("%f" ,&r);
	printf("/n enter value of y:");

	si = (pa * r * y) / 100;

	printf("/n ****************** /n");
	printf("/n principal amount :%.2f",pa);
	printf("/n rate of inteest  :%.2f",r);
	printf("/n non of years     :%.2f",y);
	printf("/n ***************  /n");
	printf("/n simple interest :%.2f",si);
	getch();
}

