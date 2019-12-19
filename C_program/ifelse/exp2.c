#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("maximum number is %d",max);
    return 0;
}
