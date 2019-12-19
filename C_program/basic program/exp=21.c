/*Write a program to enter marks of five subjects and calculate total,average and percentage.*/
#include<stdio.h>
int main()
{
    float a,b,c,d,e,t,avg,per;
    printf("enter marks of five subjects : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    avg=t/5.0;
    per=t/500*100;
    printf("\n total of 5 subjects : %0.2f",t);
    printf("\n average of 5 subjects : %0.2f",avg);
    printf("\n percentage of 5 subjects : %0.2f%%",per);
    return 0;
}
