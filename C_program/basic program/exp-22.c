/*Write a program to enter P,R,T and calculate simple interest.*/
#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter value of p,r and t :");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("\nsimple interest = %f%%",si);
    return 0;
}
