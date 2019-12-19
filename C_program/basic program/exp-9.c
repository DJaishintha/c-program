/*If a four digit number is input through the keyboard. write a program to obtain the sum of first and last digit number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int m,sum,a,b;
    printf("enter a four digit number");
    scanf("%d",&m);
    a=m%10;
    b=m/1000;
    sum=a+b;
    printf("sum of first and last digit number = %d",sum);
    return 0;
}
