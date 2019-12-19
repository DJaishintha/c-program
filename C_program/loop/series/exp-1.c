#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\nSum of the given series = %d",sum);
    return 0;
}
