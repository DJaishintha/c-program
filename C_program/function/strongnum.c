#include<stdio.h>
void isStrong(int,int);
int fact(int);
int main()
{
    int lwr_lmt,upr_lmt;
    printf("enter lower limit & upper limit:");
    scanf("%d%d",&lwr_lmt,&upr_lmt);
    isStrong(lwr_lmt,upr_lmt);
    return 0;
}
void isStrong(int x,int y)
{
    int i,j,a,n,sum=0;
    for(i=x;i<=y;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {

            a=n%10;

            sum=sum+fact(a);
            n=n/10;
        }
        if(i==sum)
            printf("\n%d is a strong number",i);
    }
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return(f);
}
