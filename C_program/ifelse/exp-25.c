#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter angles of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
        printf("\n triangle is valid");
    else
        printf("\n triangle is not valid");
    return 0;



}
