/* Write a program to enter any number and calculate its square root.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double x,z;
    printf("enter value of x:");
    scanf("%lf",&x);
    z=sqrt(x);
    printf("square root of %lf = %lf",x,z);
    return 0;
}
