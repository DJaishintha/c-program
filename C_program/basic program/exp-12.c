/* If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float sp,p;
    float cpi;
    printf("enter selling price and profit of 15 items:\n");
    scanf("%f%f",&sp,&p);
    cpi=(sp-p)/15;
    printf("\ncost price of one item = %f",cpi);
    return 0;
}
