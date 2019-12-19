#include<stdio.h>
void prime(int,int);
int main()
{
    int lwr_lmt,upr_lmt;
    printf("enter value of lower limit and upper limit:");
    scanf("%d%d",&lwr_lmt,&upr_lmt);
    prime(lwr_lmt,upr_lmt);
    return 0;
}
void prime(int x,int y)
{
    int i,j;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<x;j++)
        {
            if(x%j==0)
                break;
        }
        if(i==j)
            printf("%d",i);
    }
}
