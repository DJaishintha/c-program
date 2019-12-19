/* Write a program to enter temperature in celsius and convert it into fahrenheit.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("enter temperature in celsius :");
    scanf("%f",&c);
    f=9/5*(c+32);
    printf("temperature in fahrenheit : %f",f);
    return 0;

}
