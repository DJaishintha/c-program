#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }
        i++;
    }
    printf("The sum of the given series = %d",sum);
    return 0;
}
