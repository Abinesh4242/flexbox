#include<stdio.h>

int main()
{
float bs,da,hrs,gs;
printf("\n Enter Basic Salary :");
scanf("%f",&bs);
da=bs*40/100;
hrs=bs*20/100;
gs=bs+da+hrs;
printf ("\n Basic Salary :%0.2f",bs);
printf ("\n DA :%0.2f",da);
printf ("\n HRS :%0.2f",hrs);
printf ("\n Gross Salary :%0.2f\n",gs);
    return 0;
}