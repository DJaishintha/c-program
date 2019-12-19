#include<stdio.h>
int main()
{
    int i,j,n,p=1,sum=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        p=1;
        for(j=1;j<=i;j++)
            p=p*i;
        if(i%2!=0)
            sum=sum+p/i;
        else
            sum=sum-p/i;
        i++;
    }
    printf("The sum of the given series = %d",sum);
    return 0;
}
