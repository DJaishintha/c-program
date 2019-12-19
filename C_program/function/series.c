#include<stdio.h>
int power(int,int);
int fact(int);
int main()
{
    int n,i;
    float sum=0.0f;
    printf("enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+power(i,i)/(float)fact(i);
        i++;
    }
    printf("sum of series = %f",sum);
    return 0;
}
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    return(p);
}
int fact(int n)
{
   int i,f=1;
   for(i=1;i<=n;i++)
      f=f*i;
   return(f);
}






