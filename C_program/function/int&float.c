#include<stdio.h>
float add(int,float);
int main()
{
    int a;
    float b,sum;
    printf("enter the value of a and b:");
    scanf("%d%f",&a,&b);
    sum=add(a,b);
    printf("addition = %f",sum);
    return 0;
}
float add(int a,float b)
{
    float s;
    s=a+b;
    return(s);
}
