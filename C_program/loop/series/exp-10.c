#include<stdio.h>
int main()
{
    int i,j,n,sum=0,p=1;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        p=1;
        for(j=1;j<=i;j++)
            p=p*i;
        if(i%2==0)
            sum=sum-p;
        else
            sum=sum+p;
       i++;
    }
    printf("The sum of the given series = %d",sum);
    return 0;
}
