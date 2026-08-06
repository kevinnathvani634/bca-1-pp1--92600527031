#include<stdio.h>
#include<conio.h>
void main()
{
	float quantity,price,discount,total,final_amount;
	clrscr();
	printf("enter quantity:");
	scanf("\n %f",&quantity);
	printf("\n enter price:");
	scanf(" %f",&price);
	printf("\n enter discount percentage:");
	scanf("%f",&discount);

	total=quantity * price;
	final_amount=total-(total*discount/100);

	printf("\n final amount:%.2f",final_amount);
	getch();
}