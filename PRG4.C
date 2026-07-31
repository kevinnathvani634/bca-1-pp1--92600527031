#include<stdio.h>
#include<conio.h>

void main()

{
       float kg;
       clrscr();
       printf("enter mass in kilograms: ");
       scanf("%f" ,&kg);
       printf("\nmass in grams: %f",kg*1000);
       getch();

}