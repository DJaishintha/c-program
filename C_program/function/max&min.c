#include<stdio.h>
int max(int,int);
int min(int,int);
int main()
{
    int a,b,M,m;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    M=max(a,b);
    m=min(a,b);
    printf("\nmaximum of %d and %d is %d",a,b,M);
    printf("\nminimum of %d and %d is %d",a,b,m);
    return 0;
}
int max(int x,int y)
{
    return(x>y?x:y);
}
int min(int p,int q)
{
    return(p<q?p:q);
}
