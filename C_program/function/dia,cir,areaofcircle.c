#include<stdio.h>
float dia(float);
float circ(float);
float area(float);
int main()
{
    float r;
    float a,b,c;
    printf("enter the radius of a circle:");
    scanf("%f",&r);
    a=dia(r);
    b=circ(r);
    c=area(r);
    printf("\ndiameter = %0.2f",a);
    printf("\ncicumference = %0.2f",b);
    printf("\narea = %0.2f",c);
    return 0;
}
float dia(float a)
{
    return(2*a);
}
float circ(float b)
{
    return(2*3.14*b);
}
float area(float c)
{
    return(3.14*c*c);
}

