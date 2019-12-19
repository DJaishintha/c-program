#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of n natural numbers = %d",sum);
    return 0;

}
