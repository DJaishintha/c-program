#include<stdio.h>
int main()
{
    int i,j,k,n,p=1,f=1;
    float sum=0.0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        p=1;
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        for(k=1;k<=2;k++)
            p=p*i;
        if(i%2!=0)
            sum=sum+p/(float)f;
        else
            sum=sum-p/(float)f;
        i++;
    }
    printf("The sum of the given series = %f",sum);
    return 0;
}
