/*If a five digit number is input through the keyboard, write a program to calculate the sum of its digits.(Hint: use modulus operator '%')*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int n,m,sum,a,b,c,d,e;
    printf("enter a five digit number");
    scanf("%d",&n);
    printf("the given five digit number is %d\n",n);
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
    sum=a+b+c+d+e;
    printf("sum of five digit number %d = %d",n,sum);
    return 0;
}
