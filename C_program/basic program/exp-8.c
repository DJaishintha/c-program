/*if a five digit number is input through the keyboard. write a program to reverse the number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,rev,a,b,c,d,e;
    printf("enter a five digit number:");
    scanf("%d",&n);
    m=n;
    a=m%10;
    m=m/10;
    b=m%10;
    m=m/10;
    c=m%10;
    m=m/10;
    d=m%10;
    m=m/10;
    e=m%10;
    rev=a*10000+b*1000+c*100+d*10+e;
    printf("\nreverse of 5 digit number is %d",rev);
    return 0;

}
