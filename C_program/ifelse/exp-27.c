
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("\n it is an equilateral triangle");
    else if(a==b||b==c||a==c)
        printf("\n it is isosceles triangle");
    else if((a!=b)&&(b!=c))
        printf("\nit is a scalene triangle");
    else if(a+b==c||a+c==b||b+c==a)
        printf("\nit is a right angled triangle");
    return 0;
}
