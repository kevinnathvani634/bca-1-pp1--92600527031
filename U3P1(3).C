#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    clrscr();
    printf("\ enter value of x:");
    scanf("%d",&x);
    printf("\n enter value of y:");
    scanf("%d",&y);
    if(x == y)
    {
		printf("\n both are same");
    }
    else
    {
		printf("\n both are not equal");
		if(x>y)
		{
			printf("\n x is max");
		}
		else
		{
			printf("\n y is max");
		}

    }
    getch();
}
