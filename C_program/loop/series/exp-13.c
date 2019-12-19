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
        sum=sum+(float)f/i;
        i++;
    }
    printf("The of the given series = %f",sum);
    return 0;
}
