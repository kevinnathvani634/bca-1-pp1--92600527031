#include<stdio.h>
#include<conio.h>
void main()
{
    float salary,hra,ta,da,pf,gross_salary;
    clrscr();
    printf("\n enter tha basic salary:");
    scanf("%f",&salary);
    if(salary>=5000)
    {
        hra=salary * 5/100;
        ta = salary * 6/100;
        da = salary * 4/100;
        pf = salary * 5/100;
    }
    else
    {
        hra=salary  * 4/100;
        ta = salary * 5/100;
        da = salary * 3/100;
        pf = salary * 4/100;

        gross_salary=salary+hra+ta+da-pf;

        printf("\n-------------salary detail------");
        printf("\n hra:%.2f",hra);
        printf("\n ta :%.2f",ta);
        printf("\n da :%.2f",da);
        printf("\n pf :%.2f",pf);

        getch();
     }
}