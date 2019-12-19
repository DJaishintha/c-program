
#include<stdio.h>
int main()
{
    int i,j,n,f=1;
    float sum=0.0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        if(i%2!=0)
            sum=sum+(float)f/i;
        else
            sum=sum-(float)f/i;
        i++;
    }
    printf("The sum of the given series = %f",sum);
    return 0;
}
