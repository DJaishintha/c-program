#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        max=a;
    if(b>a&&b>c)
        max=b;
    if(c>a&&c>b)
        max=c;
    printf("\nmaximum is %d",max);
    return 0;
}
