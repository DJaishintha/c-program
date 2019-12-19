/* Write a program to find power of any number x^y.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double x,y,z;
    printf("enter value of x and y: ");
    scanf("%lf%lf",&x,&y);
    z=pow(x,y);
    printf("power of %lf ^ %lf = %lf",x,y,z);
    return 0;
}
