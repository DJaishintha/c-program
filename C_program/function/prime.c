#include<stdio.h>
void prime(int,int);
int main()
{
    int lwr_lmt,upr_lmt;
    printf("Enter two numbers:");
    scanf("%d%d",&lwr_lmt,&upr_lmt);
    prime(lwr_lmt,upr_lmt);
    return 0;
}
void prime(int x,int y)
{
    int i;
    while(x<=y)
    {
        i=2;
        while(i<x)
        {
            if(x%2==0)
                break;
            else
                i++;
        }
        if(x==i)
            printf("\n%d is a prime number",i);
        x++;
    }
}
