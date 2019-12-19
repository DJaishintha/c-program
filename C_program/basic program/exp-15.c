/* Write a program to convert days into years, weeks and days,(ignore leap year)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int y,w,d,n;
    printf("enter no of days :");
    scanf("%d",&n);
    y=n/365;
    n=n%365;
    w=n/7;
    d=n%7;
    printf("no of year is %d",y);
    printf("\nno of weeks is %d",w);
    printf("\nno of days is %d",n);
    return 0;
}
