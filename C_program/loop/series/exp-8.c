#include<stdio.h>
int main()
{
    int i,j,n,sum=0,f=1;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        if(i%2==0)
            sum=sum-f;
        else
            sum=sum+f;
    }
    printf("The sum of the given series = %d",sum);
    return 0;
}
