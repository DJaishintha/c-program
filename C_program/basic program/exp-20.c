/*Write a program to calculate area of an equilateral triangle.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float area;
    printf("enter the side of an equilateral triangle");
    scanf("%d",&a);
    area=sqrt(3)/4*a*a;
    printf("area of equilateral triangle = %f",area);
    return 0;
}

