/*Ramesh's basic salary is input through the keyboard. his dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
write a program to calculate his gross salary.*/


#include<stdio.h>
#include<conio.h>
int main()
{
    float bs,da,hra,gs;
    printf("enter basic salary of ramesh:");
    scanf("%f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra;
    printf("\nbasic salary = %f",bs);
    printf("\ndearness allowance = %f",da);
    printf("\nhouse rent allowance = %f",hra);
    printf("\ngross salary = %f",gs);
    return 0;

}
