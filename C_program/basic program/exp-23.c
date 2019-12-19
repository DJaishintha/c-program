/*Write a program to enter P,R,T an calculate compound interest.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("enter value of p,r and t :");
    scanf("%f%f%f",&p,&r,&t);
    ci=p*pow(1+r/100,t);
    printf("\ncompound interest = %f%%",ci);
    return 0;
}
